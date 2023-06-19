#!/bin/bash
gcc -shared -fPIC -o my_lib.so file.c
export LD_PRELOAD=./my_lib.so
