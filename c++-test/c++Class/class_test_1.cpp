#include<iostream>
#include<string>
using namespace std;

// the class define
class Animal
{
private:
    string name{"UNKNOW"};
public:
    int var{0};
    int legs_number{4};

    void eat()
    {
        cout << "I can eat" << endl;
    }
    void sleep()
    {
        cout << "I can sleep in the base class!" << endl;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void get_name()
    {
        cout << "the animal's name is the: " << this->name << endl;
    }
};

// the derived class of the Animal that is the dog
class Dog : public Animal
{
private:
    string name{"dog"};
    // try to add the same name member as the base class

public:
    string var{"hello, world"};
    // try to overide the function sleep
    void sleep()
    {
        cout << "I can sleep in the derived class!" << endl;
        // call the base function
        //Animal::sleep();
    }
    void change_legs_number(int legs_number)
    {
        this->legs_number = legs_number;
    }
    void bar()
    {
        cout << "the dog can bar: Wof, Wof... " << endl;
    }
    void show_name()
    {
        cout << "the animal's name is the: " << this->name << endl;
    }
};
int main()
{
    // create the animal
    Dog dog_1;
    dog_1.set_name("pig");
    dog_1.get_name();
    dog_1.bar();
    dog_1.show_name();
    // acess the public member fo the Dog class
    cout << "the number of the legs of the dog is the: " << dog_1.legs_number << endl;
    dog_1.change_legs_number(2);
    cout << "the number of the legs of the dog is the: " << dog_1.legs_number << endl;
    // about the function overwrite
    Animal ani_1;
    ani_1.sleep();

    dog_1.sleep();
    // this syntax is very interesting! use the scope access specifier ::     the base_name::function
    // test the same name var
    cout << "-------------" << endl;
    cout << "for the dog" << endl;
    cout << dog_1.var << endl;
    cout << "for the animal" << endl;
    cout << ani_1.var << endl;
    // test the pointer that is the base type and the derived type
    cout << " -------------- pointer test -----------------" << endl;
    Animal *ptr_animal = &dog_1;
    Dog *ptr_dog = &dog_1;
    cout << "type: animal, dog, and the adress: dog -> " << endl;
    ptr_animal->sleep();
    ptr_dog->sleep();
    cout << "type: animal, dog, and the adress: animal -> " << endl;
    ptr_animal = &ani_1;
    //ptr_dog = &ani_1;
    ptr_animal->sleep();
    //ptr_dog->sleep();

    return 0;
}

