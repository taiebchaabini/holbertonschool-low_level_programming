#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc *.o -shared -o '100-operations.so'
rm *.o
