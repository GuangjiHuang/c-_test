import sys
var1 = 1
var2 = "hello"
var3 = []
data_type_list = ["var1", "var2", "var3"]
for i in data_type_list:
    length = sys.getsizeof(i)
    command = f"print(type({i}))"
    print("exec the command: ", command)
    exec(command)
