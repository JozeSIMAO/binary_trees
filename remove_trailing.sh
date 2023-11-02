#!/bin/bash

# Find all C files in the current directory and its subdirectories
find . -type f -name "*.c" | while read -r file; do
    # Use sed to remove trailing whitespaces and save the result back to the file
    sed -i 's/[[:space:]]*$//' "$file"
done

