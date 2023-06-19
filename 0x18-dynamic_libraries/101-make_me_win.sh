#!/bin/bash
gcc -shared -fPIC -o lib.so file.c
export LD_PRELOAD=./lib.so
