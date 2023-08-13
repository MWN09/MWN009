from pygal.maps.world import COUNTRIES

def get_country_code(country_name):
    #Let us know the country name, in return we give its code
    
    for code, name in COUNTRIES.items():
        if name == country_name:
            return code
    # If the country wasn't found, return None.
    return None


