#!/bin/bash
temp_dir=$(mktemp -d)
find . -type f -name "*.c" -exec gcc -c {} -o "$temp_dir/{}.o" \;
ar rcs liball.a "$temp_dir"/*.o
rm -rf "$temp_dir"
