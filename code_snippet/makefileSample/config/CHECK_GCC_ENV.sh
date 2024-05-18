#!/bin/bash

command_exists () {
    command -v "$1" >/dev/null 2>&1
}

export error=0

if command_exists gcc; then
    echo "GCC is installed."
    gcc_version=$(gcc --version | head -n 1)
    echo "GCC version: $gcc_version"
else
    echo "GCC is not installed"
    error=1
fi

if command_exists g++; then
    echo "G++ is intalled."
    gpp_version=$(g++ --version | head -n 1)
    echo "G++ version: $gpp_version"
else
    echo "G++ is not installed"
    error=1
fi 

if command_exists python; then
    echo "python is installed."
    python_version=$(python --version | head -n 1)
    echo "python version: $python_version"
else
    echo "python is not installed"
    error=1
fi  