#!/bin/bash
gcc -o exercise1 exercise1.c

FILE=exercise1.c
if [[ -f"$FILE" ]]; 
then
	if [[ "$FILE" == *".c" ]]; 
	then
		./exercise1
	else
		echo "File is not a C file"
	fi
else
	echo "File does not exist."

fi

