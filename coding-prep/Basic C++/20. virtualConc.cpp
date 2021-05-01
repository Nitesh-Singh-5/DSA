#include <iostream>
using namespace std;
class A
{
public:
    virtual void f1()
    {
        cout << "f1 function of class A defined";
    }
};
class B : public A
{
public:
    void f1() // function overriding
    {
        cout << "f1 function of class B defined";
    }
    void f2()
    {
    }
};
int main()
{
    A *p, o1;
    B o2;
    p = &o2;
    p->f1(); //B
    return 0;
}