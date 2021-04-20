// Basic classes and Object program

#include <iostream>
using namespace std;
class Student
{
    char name[20];
    int roll;

public:
    void get_data();
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Roll :" << roll << endl;
    }
};
