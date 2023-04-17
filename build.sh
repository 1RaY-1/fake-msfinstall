#!/bin/bash
set -e
gcc main.c -o msfinstall
mv msfinstall ..
cd .. && rm -rf fake-msfinstall/
echo "Now pass 'msfinstall' to the victim."
exit
