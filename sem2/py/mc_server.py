import os, time
from python_aternos import Client
atclient = Client()
atclient.login_with_session(os.environ["mc_sec"])
aternos = atclient.account
servs = aternos.list_servers()
# myserv = servs[3]
while True:
  try:
    for i in servs:i.start()
  except:pass
  time.sleep(10*60)
