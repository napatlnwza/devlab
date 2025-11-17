import requests

uql="https://games.roblox.com/v1/games?universeIds=5750914919"

w=requests.get(uql)

print(f"Status :  {w.status_code}")

# print(w.json())

print(f"Name : {w.json()["data"][0]["name"]}")
# print(f"Description : {w.json()["data"][0]["description"]}")