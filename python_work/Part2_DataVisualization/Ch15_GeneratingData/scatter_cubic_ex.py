import matplotlib.pyplot as plt
import numpy as np

x_values = list(np.linspace(1,5000,5000))
y_values = [x**3 for x in x_values]

plt.scatter(x_values, y_values, c=y_values, cmap=plt.cm.Reds, s=10)

#Label axes and title
plt.title("Cube numbers", fontsize=24)
plt.xlabel("Numbers", fontsize=12)
plt.ylabel("Cube", fontsize=12)

#Set Tick parameters
plt.tick_params(axis="both", labelsize=11)

plt.show()
