"# variables

let number = 5
echo number

let number = number + 5
echo number

echo exists('number')

"let number2 = "number2"
echo exists('number2')

" the textwidth is the gobal variable, we have to use the referece to access it
" you can also use the set command to get it
" set var=xxx, is the same as the let &var = xxx;( that the var is the global variable);
echo &textwidth
"let &textwidth  = 50
"echo &textwidth
"set textwidth=100
"echo &textwidth

