import csv
import pygal
from pygal.style import LightColorizedStyle as LCS, RotateStyle as RS

from country_code import get_country_code


file_name = 'API_EN.ATM.CO2E.PC_DS2_en_csv_v2_5728999.csv'

with open(file_name) as f:
    reader = csv.reader(f)
    for i in range(4):
        next(reader)
    headings = next(reader)
    emission_1990, emission_2020 = {}, {}

    
    for row in reader:
        try:
            country = row[0]
            code = get_country_code(country)
            emission_90 = float(row[34])
            emission_20 = float(row[64])
        except ValueError:
            print("Error: " + country)
        else:
            emission_1990[code] = emission_90
            emission_2020[code] = emission_20

wm_style =RS('#001133', base_style=LCS)
wm = pygal.maps.world.World(style=wm_style)
wm.title = 'World Emissions in 1990, by Country'
wm.add('1990',emission_1990)
wm.render_to_file('world_emissions_grouping_styling_1990.svg')
wm_style1 =RS('#FF4455', base_style=LCS)
wm1 = pygal.maps.world.World(style=wm_style1)
wm1.title = 'World Emissions in 2020, by Country'
wm1.add('2020',emission_2020)
wm1.render_to_file('world_emissions_grouping_styling_2020.svg')
            
            
