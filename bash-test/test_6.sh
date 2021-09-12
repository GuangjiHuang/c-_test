#! /bin/bash

# the usage of the case, to print the code language
echo "=============  START ================="

case $1 in 
    "py")
        echo "this is the python!"
        ;;
    "cpp")
        echo "this is the c++!"
        ;;
    "c")
        echo "this is the c!"
        ;;
    "sh" | "ch")
        echo "this is the bash!"
        ;;
    "vim")
        echo "this is the vim script!"
        ;;
    "js")
        echo "this is hte java!"
        ;;
    *)
        echo "other program language!"
        ;;
esac
echo "=============  END ================="
