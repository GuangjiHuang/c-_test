# the var
input_arr = [6, 3, 2, 1, 3, 4, 5]

num_arr = [0] * len(input_arr)

for i in range(len(input_arr)):
    for j in range(len(input_arr)):
        if input_arr[i] == input_arr[j]:
            num_arr[i] += 1
print(f"{input_arr} 's count is the {num_arr}")
# search the max counter
max_counter = max(num_arr)
max_index = num_arr.index(max_counter)
print(f"the max counter is the: {max_counter}")
print(f"the max index is the : {max_index}")
print(f"the max occurance num is the: {input_arr[max_index]}")
