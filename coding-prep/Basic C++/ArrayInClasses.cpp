#include <iostream>
#include <conio.h>
using namespace std;
#define Size 3
class Student
{
    int roll[Size];
    char name[Size][20];

public:
    void getdata();
    void display();
};
void Student ::getdata()
{
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter name :" << endl;
        cin >> name[i];
        cout << "Enter Roll :" << endl;
        cin >> roll[i];
    }
    getch();
}
void Student ::display()
{
    for (int i = 0; i < Size; i++)
    {
        cout << "Name :" << name[i] << endl;
        cout << "Roll No :" << roll[i] << endl;
    }
    getch();
}
int main()
{
    Student stu;
    stu.getdata();
    stu.display();
    return 0;
}
