class FooParent:
    def __init__(self):
        self.parent = r"I'm the parent."
        print("Parent")

    def bar(self, message):
        print(f"{message} from parent")

class FooChild(FooParent):
    def __init__(self):
        # call the parent class
        super().__init__()
        print("Child")
    def bar(self, message):
        super().bar(message)
        print("Child bar function")
        print(self.parent)

if __name__ == "__main__":
    foo_child = FooChild()
    foo_child.bar("Hello, world!")

