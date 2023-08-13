import csv
from matplotlib import pyplot as plt

from country_code import get_country_code


file_name = 'API_EN.ATM.CO2E.PC_DS2_en_csv_v2_5728999.csv'

with open(file_name) as f:
    reader = csv.reader(f)
    for i in range(4):
        next(reader)
    headings = next(reader)
    codes, emission_1990, emission_2020 = [], [], []

    
    for row in reader:
        try:
            country = row[0]
            code = str(get_country_code(country))
            emission_90 = float(row[34])
            emission_20 = float(row[64])
        except ValueError:
            print("Error: " + country)
        else:
            if code == 'None':
                continue
            codes.append(code)
            emission_1990.append(emission_90)
            emission_2020.append(emission_20)


fig = plt.figure(dpi=128, figsize=(10, 6))


plt.scatter(codes[70:110], emission_1990[70:110], s=5, zorder=1)
plt.scatter(codes[70:110], emission_2020[70:110], s=5, zorder=2)
plt.xlabel('Countries', fontsize=16)
fig.autofmt_xdate()
plt.xlabel('Emissions', fontsize=16)
plt.title("World Emissions Data")
plt.legend(['1990', '2020'])

plt.savefig("Emission.png")

            
            
