#!/bin/zsh

# Check if a file name is provided as an argument
if [ -z "$1" ]; then
  echo "Usage: $0 <filename.cpp>"
  exit 1
fi

# Extract the filename without the extension
filename=$(basename -- "$1")
filename="${filename%.*}"

# Compile the C++ file
/opt/homebrew/Cellar/gcc/14.1.0_1/bin/g++-14 -o "$filename" "$1" 

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  # echo "Compilation successful. Running the program..."
  # Run the compiled program
  ./"$filename"
  rm "$filename"
else
  echo "Compilation failed."
  exit 1
fi