# make the list class to achive the [1, 2] + [3, 4] = [4, 6];

class list_ex(list):
    # use the default constructor

    # overwrite the __add__
    def __add__(self, obj_list):
        #is_intFunc = lambda x: x is int
        if len(self) == len(obj_list):
            return [self[i]+obj_list[i] for i in range(len(self))]
        else:
            return []

if __name__ == "__main__":
    list_a = list_ex([1, 2, 3])
    list_b = list_ex([3, 4])
    list_c = list_a + list_b
    print("the list_c is", list_c)
    # print to see the method
    print("\n".join(dir(list_ex)))
    print(type(list_a), type(list_b), type(list_c), sep="\t")
