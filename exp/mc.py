from threading import Thread
import os

def setup_server():
    if not(os.path.exists("server")):
        os.makedirs("server")
    if not(os.path.exists("server/eula.txt")):
        with open("server/eula.txt", "w") as f:
            f.write("eula=true")

    if not(os.path.exists("server/server.jar")):
        os.system("curl -o server/server.jar https://piston-data.mojang.com/v1/objects/59353fb40c36d304f2035d51e7d6e6baa98dc05c/server.jar")

def start_playit():
    print("Configuring Playit...................")
    if not(os.path.exists("playit")):
        os.system("curl -o playit https://github.com/playit-cloud/playit-agent/releases/download/v0.15.26/playit-linux-amd64 && chmod +x playit && ./playit")


def start_server():
    os.system("cd server && java -Xmx1024M -Xms1024M -jar server.jar nogui")


def main():
    setup_server()
    server_thread = Thread(target=start_server)
    server_thread.start()
    start_playit()


if __name__ == "__main__":
    main()
