from threading import Thread
import os, sys


platform = sys.platform

def setup_server():
    if not(os.path.exists("server")):
        os.makedirs("server")

    with open("server/eula.txt", "w") as f:
        f.write("eula=true")


    with open("server/server.properties", "w") as f:
        f.write("motd=Welcome to the Minecraft Server!\n")
        f.write("enable-command-block=true\n")
        f.write("enable-rcon=true\n")
        f.write("rcon.password=your_rcon_password\n")
        f.write("rcon.port=25575\n")
        f.write("max-players=20\n")
        f.write("level-name=world\n")
        f.write("gamemode=survival\n")
        f.write("online-mode=false\n")

    if not(os.path.exists("server/server.jar")):
        os.system("curl -o server/server.jar https://piston-data.mojang.com/v1/objects/59353fb40c36d304f2035d51e7d6e6baa98dc05c/server.jar")

def start_playit():
    if not(os.path.exists("playit")):
        if "linux" in platform:
            os.system("curl -o playit https://github.com/playit-cloud/playit-agent/releases/download/v0.15.26/playit-linux-amd64 && chmod +x playit && ./playit")
        elif "win" in platform:
            os.system("curl -o playit.exe https://github.com/playit-cloud/playit-agent/releases/download/v0.15.26/playit-windows-x86_64.exe")
            os.system("playit")


def start_server():
    os.system("cd server && java -Xmx1024M -Xms1024M -jar server.jar nogui")


def main():
    setup_server()
    server_thread = Thread(target=start_server)
    server_thread.start()
    start_playit()
    


if __name__ == "__main__":
    main()
