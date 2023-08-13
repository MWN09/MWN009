import csv
import matplotlib.pyplot as plt

filename = 'WeatherData_CSV\sitka_weather_2021_simple-original.csv'

with open(filename) as f:
    reader = csv.reader(f)
    header_row = next(reader)
    # first_reading = next(reader)
    # print(header_row)
    # print(first_reading)
    for index, heading_name in enumerate(header_row):
        print(index, heading_name)
    
    highs = []
    lows = []
    for row in reader:
        if row[4] == '' or row[5]== '':
            continue
        highs.append(row[4])
        lows.append(row[5])
    highs = [int(i) for i in highs]
    lows = [int(i) for i in lows]

    plt.scatter(highs,lows, s=10)
    plt.axis([min(highs)-5, max(highs)+5, min(lows)-5, max(lows)+5])
    plt.xlabel("Highest Temp. Value")
    plt.ylabel("lowest Temp. Value")
    plt.show()

