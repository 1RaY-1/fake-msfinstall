#!/bin/sh
gcc main.c -o msfinstall
mv msfinstall ..
cd .. && rm -rf fake-msfinstall/
exit
