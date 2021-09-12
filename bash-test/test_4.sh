#! /bin/bash

my_array=(foo bar baz)
for element in ${my_array[*]}
do
    echo "the element is the: ${element}" 
done

# count the number elements
echo "${#my_array[@]} element"

