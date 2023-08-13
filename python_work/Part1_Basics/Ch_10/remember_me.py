import json

filename = 'username.json'

username = input("Please let me know your First name: ")

with open(filename,'w') as f_obj:
    json.dump(username, f_obj)
    print(f"We'll remember you when you come back, { username } !")
