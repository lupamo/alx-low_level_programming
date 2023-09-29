#!/bin/bash

# Get a list of all the .c files in the current directory.
c_files=$(find . -type f -name "*.c")

# Create a static library from the .c files.
ar rcs libmy.a $c_files

# Exit the script.
exit 0
