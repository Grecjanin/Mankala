#!/bin/bash

cd build
qmake ../klient/klient.pro
make
mv klient ../klient.out
cd ../serwer
gcc -pthread -Wall serverepoll.c GameLogic.c -o serverepoll.out
mv serverepoll.out ../serverepoll.out
cd ..
