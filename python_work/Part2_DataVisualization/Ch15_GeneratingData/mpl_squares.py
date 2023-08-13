import matplotlib.pyplot as plt

input_values = [1, 2, 3, 4, 5]
squares = [1, 4, 9, 16, 25]

plt.plot(input_values, squares, linewidth=3)

# Set chart title and label axes.
plt.title("Square Numbers", fontsize=24)
plt.xlabel("Value", fontsize=14)
plt.ylabel("Square of Value", fontsize=14)

# Set size of tick labels.
plt.tick_params(axis='both', labelsize=11)

plt.show()

"""import matplotlib.pyplot 

squares = [1, 4, 9, 16, 25]
matplotlib.pyplot.plot(squares)
matplotlib.pyplot.show()"""
