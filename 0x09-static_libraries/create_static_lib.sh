#!/bin/bash
c_files=$(find . -type f -name "*.c")
ar rcs liball.a $c_files
