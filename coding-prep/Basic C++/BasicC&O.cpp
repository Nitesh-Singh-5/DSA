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
void Student ::get_data()
{
    cout << "Enter a number :" << endl;
    cin >> name;
    cout << "Enter Roll number :" << endl;
    cin >> roll;
}
int main()
{
}