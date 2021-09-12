#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

// declare the class and the structure
struct blind_stu;
class Student;
// declare the function
size_t find(vector<string>&v_s, string key) ;
// the structure
struct blind_stu
{
    string name;
    Student *ptr_stu = NULL;
};
// the class
class Student
{/*{{{*/
public:
    string name{"dummy"};
    string sex{"m/f"};
    int age;
    long long id;
    double score;
    int rank;

public:
    // the static member 
    static int stu_num;
    static vector<string> total_name;
    static vector<blind_stu> name_stu;

    // constructor and the deconstructor
    Student() = default;
    // the copy constructor is the default
    //Student(const Student&) = delete;
    //Student(Student &&);
    //Student operator=(Student &&);
    // the copy assignment is the default
    //Student operator=(const Student &) = delete;
    Student(string name) : name(name) 
    {/*{{{*/
        stu_num ++;
        total_name.push_back(name);
        name_stu.push_back({name, this});
    }/*}}}*/

    Student(string name, string sex, int age, long long id) : name(name), sex(sex), age(age), id(id) 
    {/*{{{*/
        stu_num ++;
        total_name.push_back(this->name);
        name_stu.push_back({name, this});
    }/*}}}*/
    ~Student() {}
    // the member function
    static void set_score(string set_name, double score)
    {/*{{{*/
        if (0<= score <= 100)
        {
            // check if the set_name in the vector
            size_t index = find(total_name, set_name);
            bool flag = index != total_name.size();
            if (flag)
            {
                // if in, set the score coresponding to the name
                // ??????????????????????????????????????????????????
                // get the key-value ( name-ptr_stu) by the index
                (name_stu[index].ptr_stu) -> score = score;
            }
            else
            {
                // if not in, promote the information and then ask to if creat the student?
                cout << "The student: " << set_name << " not exists! Would you creat the student information? " << endl;
                cout << "y/n: " << endl;
                char c_operand;
                cin >> c_operand;
                if (c_operand == 'y')
                {
                    // new the student information
                    new Student(set_name);
                    cout << "creat the new student: " << set_name << " sucessfully!" << endl;
                }
                else
                    cout << " Set the score fail! " << endl;
            }
        }
        else
        {
            cout << "the score that you want to set is: " << score << ", error!" << endl;
        }
    }/*}}}*/

    // the operator overload
    // << to output the info
    friend ostream & operator << (ostream &, const Student *);
    // >> to get the info
    friend istream & operator >> (istream &, Student &);
    // overload the copy assignment = 
    Student & operator = (const Student &);
    // overload the == >= <= > <
    bool operator == (const Student &) const;
    bool operator <= (const Student &) const;
    bool operator >= (const Student &) const;
    bool operator < (const Student &) const;
    bool operator > (const Student &) const;

};/*}}}*/
// define the stu_num
int Student::stu_num = 0;
vector<string> Student::total_name;
vector<blind_stu> Student::name_stu;

int main()
{/*{{{*/
    Student s1("gj");
    Student s2("sq");
    Student s3("foo");
    Student::set_score("gj", 99.8);
    Student::set_score("sq", 99.9);
    Student::set_score("foo", 60.5);

    for (int i=0; i<Student::stu_num; i++)
    {
        cout << "student " << Student::name_stu[i].name<< "'s score is: " << (Student::name_stu[i].ptr_stu) -> score << endl;
    }
    cout << "-------------------------------" << endl;
    cout << &s1;
    cout << &s2;
    cout << &s3;
    cout << "-------------------------------" << endl;
    Student s4("dummy");
    cout << &(s4 = s2);
    if (s4 == s2)
        cout << " s4's score is equal to the s2's score " << endl;
    else
        cout << " s4's score is not equal to the s2's score " << endl;
    cout << "s2 > s3? " << (s2 > s3) << endl;
    cout << "s2 < s3? " << (s2 < s3) << endl;
    cout << "s1 <= s2? " << (s1 <= s2) << endl;
    cout << "s1 >= s2? " << (s1 >= s2) << endl;
    cout << " ============================= copy constructor ==================" << endl;
    Student s5{s2};
    cout << &s5;
    // call the default constructor
    Student s6;
    cout << &s6;
    return 0;
}/*}}}*/
s
// the definiton of the none-member function
ostream & operator << (ostream &os, const Student *ptr_s)
{/*{{{*/
    os << "======================================================" << endl;
    os << "Student " << ptr_s->name << "'s infomation: " << endl;
    os << "Score: " << ptr_s->score << endl;
    os << "======================================================" << endl;
    return os;
}/*}}}*/

istream & operator >> (istream &is, Student &s)
{/*{{{*/
    cout << "Name is: " << s.name << endl;
    cout << "Please input the score: ";
    is >> s.score;
    return is;
}/*}}}*/

Student & Student::operator = (const Student & s)
{
    this->score = s.score;
    return *this;
}

bool Student::operator == (const Student &s) const
{
    return (this->score == s.score)? true : false;
}

bool Student::operator >= (const Student &s) const
{
    return (this->score >= s.score)? true : false;
}
bool Student::operator <= (const Student &s) const
{
    return (this->score <= s.score)? true : false;
}
bool Student::operator > (const Student &s) const
{
    return (this->score > s.score)? true : false;
}
bool Student::operator < (const Student &s) const
{
    return (this->score < s.score)? true : false;
}

size_t find(vector<string>&v_s, string key) 
{/*{{{*/
    size_t i;
    for (i=0; i!=v_s.size(); i++)
    {
        if (v_s[i] == key)
            break;
    }
    return i;
}/*}}}*/
