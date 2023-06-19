#!/bin/bash
gcc -shared -fPIC -o lib.so test.c
export LD_PRELOAD=/$PWD/./lib.so
