#!/bin/bash

if [[ $# -eq 1 ]]; then
    cp template.cpp $1.cpp
    code $1.cpp
else
    echo "Incorrect number of args: $#"
fi