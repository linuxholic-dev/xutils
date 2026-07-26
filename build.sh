#!/usr/bin/env bash

set -e

if ! command -v g++ > /dev/null; then
    echo "error: g++ not found!"
    exit 1
fi

if ! command -v gcc > /dev/null; then
    echo "error: gcc not found!"
    exit 1
fi

if [ ! -d bin ]; then
    echo "Warning: bin directory not found!, we will create the new one"
    mkdir bin
    echo "Created bin/"
fi

for file in src/*.cxx
do
    name=$(basename "$file" .cxx)

    g++ -std=c++17 -Wall -Wextra -O3 "$file" -o "bin/$name"

    echo "build xutils command: $name, successful!"
done

for file in src/*.c
do
    name=$(basename "$file" .c)

    gcc -Wall -Wextra -O3 "$file" -o "bin/$name"

    echo "build xutils command: $name, successful!"
done

echo "all done! enjoy xutils 0.1 command!"
