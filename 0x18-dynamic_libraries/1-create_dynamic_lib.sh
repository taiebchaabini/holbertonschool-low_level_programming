#!/bin/sh
gcc -Wall -fPIC -c *.c
gcc *.o -shared -o libholberton.so
