
import json
from socket import *
from threading import Thread

HOST = 'localhost'
PORT = 8000

def connect():
    server = socket(AF_INET, SOCK_STREAM)
    server.bind((HOST, PORT))
    server.listen(10)

    while True:
        client, addr = server.accept()
        print("[+] Connection made with", addr)
        t = Thread(target=connect_handler, args=(client,))

def connection_handler(client):
    while True:

        # The json packet can't be more than 4096 bytes
        data = client.recv(4096)

        if not data:
            break;

        with open('config.json') as f:
            f.write(json.dumps(data.decode('utf-8')))

if __name__ == '__main__':
    connect()
