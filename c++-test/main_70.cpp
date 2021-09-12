#include<iostream>
#include<string>
using namespace std;

class Student
{
    // private 
public:
    string name;
    string sex;
    long long id;
    int age;
    double scores;
//public:
    static int obj_n;
public:
    Student() { obj_n++; };
    Student(string name, string sex, long long id, int age, double scores) : 
        name(name), sex(sex), id(id), age(age), scores(scores) 
    {
        obj_n++;
    }
    // move the copy assignment
    //Student& operator = (Student &&);
    void show_scores() const
    {
        // const Studnet * const this = &obj_xxx;
        // static object in the member funciton
        static int cout_n = 0;
        cout_n ++ ;
        cout << "call the funciton: "  << cout_n << " times" << endl;
        cout << "Your scores is: " << this->scores << endl;

    }
    static void get_obj_n() 
    {
        cout << "the object's number is: " << obj_n << endl;
    }
};
// the class's static member
int Student::obj_n = 0;

int main()
{
    // creat the student objects
    Student s1("GJ", "male", 2021, 25, 99.5);
    Student *ptr_s2 = new Student("SQ", "female", 2021, 25, 99.6);
    Student *ptr_s = new Student[100]{{"foo", "male", 2021, 22, 80}};
    s1.show_scores();
    ptr_s2->show_scores();
    cout << "----------------" << endl;
    Student::get_obj_n();
    // test the new 
    int ith = 99;
    *(ptr_s+ith) = *ptr_s2;
    cout << "the " << ith+1 << " student's id is: "  << (*(ptr_s+ith)).id << endl; 
    cout << "the  name is: " << (*(ptr_s+ith)).name << endl;
    return 0;
}
