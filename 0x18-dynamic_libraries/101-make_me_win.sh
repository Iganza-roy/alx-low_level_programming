#!/bin/bash
gcc -shared -o myprintf.so -fPIC test.c
export LD_PRELOAD=./myprint.so:$LD_LIBRARY_PATH
