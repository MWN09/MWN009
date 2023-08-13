filename = 'alice_new.txt'

try:
    enc = 'utf-8' # file is encoded
    with open(filename,'r', encoding=enc) as f_obj:
        contents = f_obj.read()
except FileNotFoundError:
    msg = f"Sorry, the file {filename} does not exist."
    print(msg)
else:
    # Count the approximate number of words in the file.
    words = contents.split()
    num_words = len(words)
    print("The file " + filename + " has about " + str(num_words) + " words.")
