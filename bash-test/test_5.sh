#! /bin/bash

# the array
my_array=(10)

cat $1 | while read line
do
    if [ "${line:0:1}" == "(" ]; then
        echo ${line:0:5} | tr -cd [:digit:] >> cache_bash.txt
        echo >> cache_bash.txt
    fi
done
cat cache_bash.txt | while read line
do
    #echo $line
    my_array+=(${line})
done
echo ${my_array[@]}
