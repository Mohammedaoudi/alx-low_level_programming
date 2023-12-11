#!/bin/bash
gcc -fPic -c *.c
gcc -shared *.o -o liball.so
