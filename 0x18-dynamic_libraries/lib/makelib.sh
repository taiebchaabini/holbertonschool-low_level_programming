#!/bin/sh
gcc -Wall -fPIC -c *.c
gcc *.o -shared -o libholberton.so
rm *.o
mv libholberton.so ..
cp holberton.h ..
