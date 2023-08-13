import random

# Initialize game board
board_size = 8
ship_sizes = [3, 4, 5]
num_ships = len(ship_sizes)
board = [["O"] * board_size for _ in range(board_size)]
ships = []

# Place ships randomly on the board
def place_ships():
    for size in ship_sizes:
        ship_placed = False
        while not ship_placed:
            ship_row = random.randint(0, board_size - 1)
            ship_col = random.randint(0, board_size - 1)
            orientation = random.choice(["horizontal", "vertical"])

            if is_valid_placement(ship_row, ship_col, size, orientation):
                if orientation == "horizontal":
                    for i in range(size):
                        board[ship_row][ship_col + i] = "S"
                else:
                    for i in range(size):
                        board[ship_row + i][ship_col] = "S"
                ships.append((ship_row, ship_col, size, orientation))
                ship_placed = True

# Check if a ship placement is valid
def is_valid_placement(row, col, size, orientation):
    if orientation == "horizontal":
        if col + size > board_size:
            return False
        for i in range(size):
            if board[row][col + i] != "O":
                return False
    else:
        if row + size > board_size:
            return False
        for i in range(size):
            if board[row + i][col] != "O":
                return False
    return True

# Print the game board
def print_board():
    print("  " + " ".join(str(i + 1) for i in range(board_size)))
    for i, row in enumerate(board):
        print(chr(ord('A') + i) + " " + " ".join(row))

# Get player's guess
def get_guess():
    while True:
        try:
            guess = input("Enter your guess (e.g., A1): ").strip().upper()
            if len(guess) != 2 or not guess[0].isalpha() or not guess[1:].isdigit():
                raise ValueError
            guess_row = ord(guess[0]) - ord('A')
            guess_col = int(guess[1:]) - 1

            if guess_row < 0 or guess_row >= board_size or guess_col < 0 or guess_col >= board_size:
                print("Oops, that's not even in the ocean.")
            elif (guess_row, guess_col) in guesses:
                print("You've already guessed that!")
            else:
                return guess_row, guess_col
        except ValueError:
            print("Oops, please enter a valid guess (e.g., A1, B2).")

# Update the game board based on the player's guess
def update_board(guess_row, guess_col):
    if (guess_row, guess_col) in ships:
        board[guess_row][guess_col] = "H"
        ships.remove((guess_row, guess_col))
        print("Congratulations! You sank a battleship!")
    else:
        board[guess_row][guess_col] = "X"
        print("You missed!")

# Check if the game is over
def game_over():
    return len(ships) == 0


# Main game loop
def play_game():
    place_ships()
    while True:
        print_board()
        guess_row, guess_col = get_guess()
        guesses.append((guess_row, guess_col))
        update_board(guess_row, guess_col)
        if game_over():
            print_board()
            print("Congratulations! You sank all the battleships!")
            break

# Start the game
print("Welcome to Battleship Game!")
play_game()
