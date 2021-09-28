"match the reference number
:/\v(\[.{1,8}\])
"substitue 
:%s//[*]\1/g

let counter=0
for i in range(1,60)
    execute "normal gg"
    execute "normal n"
    execute "normal s<Ctrl>r=counter<esc>"
    let counter += 1
endfor
