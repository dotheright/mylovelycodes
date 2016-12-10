#!/usr/bin/env python

import socket

for  port in  [80,21] :
    print port,socket.getservbyport(port,"tcp");
