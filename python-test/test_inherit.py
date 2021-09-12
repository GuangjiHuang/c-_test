# the AbstractGeometic class
class AbstractGeometic:
    # the attribute
    def __init__(self, color=None, is_filled=None):

        self.color = color if color else "red"
        self._is_filled = is_filled if is_filled else False
        self.__double_underline = "double_underline"
    
    def show_attribute(self):
        print(f"the color is the: {self.color}, and {self._is_filled}")

# the derivative class
class Circle(AbstractGeometic):
    def __init__(self, ridius, color=None, is_filled=None):
        super().__init__(color, is_filled)
        self.riduis = 1

    def get_area(self):
        area = self.riduis ** 2 * 3.14
        print("the area is the: ", area)
    def show_derivative_attribute(self):
        print("the circle's attribute can be the: ")
        print("color: ", self.color)
        print("i_filled: ", self._is_filled)
        print("the double_underline ", __AbstractGeometic.__double_underline)





if __name__ == "__main__":
    # create the object
    abg = AbstractGeometic()
    abg.show_attribute()
    
    # create the circle object
    cir = Circle(1, "bule")
    cir.get_area()
    cir.show_derivative_attribute()
    # can the main to acess the _varxxx of the class by the way obj._varxxx?
    print("the cir's _is_filled is the: ", cir._is_filled)



