#! /bin/bash

# define the function and show the number of the argument and the argument list

function func
{
    # the number of the arguments
    echo "the arguments number is the: $#"

    # show the arguments list
    echo "the argument list is the: $*"

    if [ $# == '0' ]; then
        echo "if there is no argument, output the name is: $0"
    fi
}

# call the function
echo "================"
func huang guangji
echo "================"
func foo
echo "================"
func



