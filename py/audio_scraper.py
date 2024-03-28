import json, os
import requests as req
songs = []
for i in range(2000, 7001):
	url = f"https://pagalnew.com/download128/{i}"
	headers = req.get(url).headers
	print(f"{i}: ", headers["Content-Disposition"].split('"')[1])
	data = {"filename":headers["Content-Disposition"].split('"')[1], "url":url}
	songs.append(data)

with open("songs.json", 'w') as json_file:
    json.dump(songs, json_file, indent=4)

webhook = os.environ["AUDIO_HOOK"]
data = {"content": ""}
req.post(webhook, json=data, files={"file": open("songs.json", "r")})
