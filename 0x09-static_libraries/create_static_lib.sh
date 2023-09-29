#!/bin/bash
for file in *.c; do
    gcc -c "$file" -o "temp_objs/${file%.c}.o"
done
