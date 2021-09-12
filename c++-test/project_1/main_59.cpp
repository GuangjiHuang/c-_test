#include<iostream>
#include<string>
#include<vector>

using namespace std;
// the structure
class Student
{
public:
    // the static member
    static int a;
    static long long n;
    double scores;
    long long int id;
    int age = 20;
    string sex = "male";
    vector<double> weight_height{0, 0};
    // the pointer that points to the object itself
    Student *ptr_this;
    //this->age  = 10;
    double count_ibm() const
    {
        double ibm;
        if (this->weight_height[0] != 0) 
            ibm = (double)weight_height[0] / weight_height[1] / weight_height[1] * 10000;
        else
            ibm = 1.0;
        return ibm;
    }
    // change the data member using the this pointer
    void change_val(int val)
    {
        this->age = val;
    }

    // copy the object
    Student copy_obj()
    {
        return *this;
    } 
    // refer to the object
    Student &refer_obj()
    {
        // this is the pointer that poins to the object itself
        return *this;
    }

    void error_func()
    {
        int hello  = 2;
    }
    // write the constructor
    Student(long long id, int age, string sex, vector<double> weight_height) : id(id), age(age), sex(sex)
    {
        // if call, add 1 of the n
        ++n;
        // cout the id and the this->id
        cout << "-----------------------------------------------" << endl;
        cout << "the weight is: " << weight_height[0] << endl;
        cout << "the this->weight is: " << this->weight_height[0] << endl;
        cout << "-----------------------------------------------" << endl;
        if (weight_height.size() == 2)
        {
            this->weight_height = weight_height;
        }
        else 
        {
            weight_height[0] = weight_height[1] = 0;
        }
    }
    // the opeartor overload
    // define a function to output the data member of the class
    ostream &output_info (ostream& os)const 
    {
        os << "id: " << id << endl;
        os << "age: " << age << endl;
        os << "sex: " << sex << endl;
        os << "ibm: " << count_ibm() << endl;
        return os;
    }
    // the static function in the class
    static void print_value()
    {
        // get the static member
        cout << "the object's number is the: " << Student::n << endl;
    }
    void foo_func()
    {

        int age = 10;
        cout << " the foo_fun's age is: " << age << endl;
        cout << " the object's age is: " << this->age << endl;
        return ;
    }

    //the operator overload: "+"
    //version 1;
    //Student operator+ (const Student &operand_2)
    //{
    //    Student temp;
    //    temp.scores = (this->scores + operand_2.scores) / 2;
    //    return temp;
    //}

    // version 2;
    Student operator + (const Student &operand_2)
    {
        this->scores = (this->scores + operand_2.scores) / 2;
        return *this;
    }
protected:
// define the < as the refernce
    friend ostream & operator << (ostream& os, const Student &s_foo)
    {
        os << "id: " << s_foo.id << endl;
        os << "age: " << s_foo.age << endl;
        os << "scores: " << s_foo.scores << endl;
        return os;
    }
public:

    // the dafault constructor
    Student() {++n;}
    // the deconstructor
    ~Student() {}
    // the constructor that to initialize the scores; 
    Student(double scores) : scores(scores) { ++n; cout << "creat the obj, the scores is the: " << this->scores << endl; };
};

// the function that simulate the this member function of the class
double count_ibm(Student*);
long long Student::n = 0;
//int Student::a;
static int glob_a = 4;
int main()
{
    ;
    // creat the s1
    Student s1;
    s1.ptr_this = &s1;
    //Student s1{202021017354, 24, "male", {65, 178}, &s1};
    // print the adrss of the s1
    printf("the adress of the s1 is: %p\n", &s1);
    printf("the value of the ptr_this is: %p\n", s1.ptr_this);
    // you can use the ptr_this to acess the anything you want to get
    cout << "student GuangjiHuang's information is: " << endl;
    cout << "id: " << s1.ptr_this->id << endl;
    cout << "age: " << s1.ptr_this->age << endl;
    cout << "sex: " << s1.ptr_this->sex << endl;
    cout << "weight: " << s1.ptr_this->weight_height[0] << "\t" << "height: " << s1.weight_height[1] << endl;
    cout << "ibm: " << s1.count_ibm() << endl;
    cout << "-----------------------" << endl;
    cout << "======  Good Student ======" << endl;
    cout << "-----------------------" << endl;

    // creat the s2, using the this to see if the it exists?
    Student s2; // call the default constructor;
    s2.change_val(19);
    cout << "the s2's age is: " << s2.age << endl;
    printf("the adress of the s2 is: %p\n", s2.ptr_this);
    
    //c creat the s3, call the constructor that need the arguments
    Student s3(2021, 22, "female", {42, 158});
    cout << "the ibm of the s3 is the: " << s3.count_ibm() << endl;
    cout << "the id: " << s3.id << "\t" << "the age: " << s3.age << endl;
    cout << "the sex of s3 is: " << s3.sex << endl;
    // call the copy_obj and the refer_obj function of the class
    //Student s5 = s3.copy_obj();
    Student &s5 = s3;
    s3.refer_obj().id = 520; // this is the reference of the s3
    // check the adress of the s3 and the s5 and the s6
    printf("the adress of the s3 is: %p\n", &s3);
    printf("the adress of the s5 is: %p\n", &s5);
    //printf("the adress of the s6 is: %p\n", &s6);
    // use the s5 to change the s3's information
    //s3.id = 2023;
    // output the information of the s3, s5 and the s6
    cout << "the information of the s3 is: " << endl;
    cout << "id: " << s3.id << endl;

    cout << "the information of the s5 is: " << endl;
    cout << "id: " << s5.id << endl;
    
    cout << "the information of the s6 is: " << endl;
    cout << "id: " << s3.refer_obj().id << endl;
    // use the outside function to simulate the this member fucntion
    cout << "-----------------------------------------------" << endl;
    cout << "the s3's ibm is the: " << count_ibm(&s3) << endl;
    cout << "the s5's ibm is the: " << count_ibm(&s5) << endl;
    //cout << "the s6's ibm is the: " << count_ibm(&s6) << endl;
    cout << "-----------------------------------------------" << endl;

    // test the const keyword inside the class

    const Student s7{s3}; // the s7 is the constant Student object name;
    // try to call the function that is the cost and not const
    cout << "the s7's ibm is the: " << s7.count_ibm() << endl;
    //s7.error_func();

    // about the operator overload, define the << to output all the information of all the fucntion
    // cout << s7 << endl; // that will make error, because you have not defined the operator "<<"
    // first you can use the function to implement it. Write a member function.
    Student s8(98.5), s9(88); // use the score to creat the object;
    s8 + s9;
    cout << "the s8's score is the: " << s8.scores << endl;
    //cout << "the s10's scores is the: " << s10.scores << endl;
    // use the << 
    cout << " --------------- the  << overload << ---------------------" << endl;
    cout << s3;
    cout << s9;

    // the static member 
    cout << "the n is: " << Student::n << endl;
    // call the static function
    Student::print_value();
    s3.print_value();

    return 0;
}

double count_ibm(Student *emu_this)
{
    return emu_this->weight_height[0]/(emu_this->weight_height[1] * emu_this->weight_height[1]);
}
/*
   double count_ibm()
    {
        return weight_heigh[0]/(weight_height[1]*weight_height[1]);
    }
*/
// the difference? In fact in the class, the member function omit the this! like the Student *this; That is very important.

