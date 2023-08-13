from pygal.maps.world import COUNTRIES

for country_code in sorted(COUNTRIES.keys()):
    print(country_code, COUNTRIES[country_code])
    
list1 = ['1','2','3']
list2 = [int(i) for i in list1]
print(list2)
