// Parameterized constructor

#include <iostream>
using namespace std;
class student
{
public:
    student(int, int);
};
student ::student(int a, int b)
{
    cout << "Value of A :" << a << endl;
    cout << "Value of B :" << b << endl;
}
int main()
{
    student stu(2, 4);
    return 0;
}