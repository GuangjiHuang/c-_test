#ifdef STUDENT_H
#define STUDENT_H
/* here put the class, funciton, and the macro */
// the class
class student{
private:
    /*-------- data member --------------- */
    // the static member
    static long long n;

    double scores;
    string name {"foo"};
    string sex  {"male"};
    long long id;
    int age = 20;
    vector<double> weight_height{0, 0};
    // the pointer that points to the object itself
    Student *ptr_this;
    //this->age  = 10;

public:
    /*-------- constructor --------------- */
    // the default constructor
    Student();

    // intialization the scores
    Student(double scores);

    Student(long long id, int age, string sex, vector<double> weight_height);

    // the deconstructor
    ~Student() {}

    /*-------- function member --------------- */
    // count the ibm 
    double count_ibm() const;

    // change the id
    void change_val(int val);

    //copy the object
    Student copy_obj();




#endif

