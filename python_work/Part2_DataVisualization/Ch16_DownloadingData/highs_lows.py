import csv

from matplotlib import pyplot as plt
from datetime import datetime

# Get dates and high temperatures from file.
filename = 'WeatherData_CSV\sitka_weather_2021_simple-original.csv'

with open(filename) as f:
    reader = csv.reader(f)
    header_row = next(reader)
    # first_reading = next(reader)
    # print(header_row)
    # print(first_reading)
    for index, heading_name in enumerate(header_row):
        print(index, heading_name)
    
    highs, lows, dates = [], [], []
    for row in reader:
        try:
            current_date = datetime.strptime(row[2], '%Y-%m-%d')
            high = int(row[4])
            low = int(row[5])
        except ValueError:
            print(current_date, 'missing data')
        else:
            dates.append(current_date)
            highs.append(high)
            lows.append(low)
# Plot data.
fig = plt.figure(dpi=128, figsize=(10, 6))
plt.plot(dates, highs, c='red', alpha=0.5)
plt.plot(dates, lows, c='blue', alpha=0.5)
plt.fill_between(dates, highs, lows, facecolor='blue', alpha=0.1)

# Format plot.
plt.title("Daily high and low temperatures - 2021", fontsize=24)
plt.xlabel('', fontsize=16)
fig.autofmt_xdate()
plt.ylabel("Temperature (F)", fontsize=16)
plt.tick_params(axis='both', which='major', labelsize=16)
plt.legend(["Higest Temp", "Lowest Temp"])
plt.savefig("Daily high and low temperatures - 2021.png")
    

