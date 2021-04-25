// Multiple Inheritence's Constructor in Derived class

#include <iostream>
using namespace std;

class A
{
private:
    int a;

protected:
    int b;

public:
    A(int i, int j)
    {
        a = i;
        b = j;
        cout << "A initialized " << endl;
    }
    void display_ab(void)
    {
        cout << "\nThe value of a is :" << a;
        cout << "\nThe value of b is :" << b;
    }
    int get_a(void)
    {
        return a;
    }
};
class B
{
private:
    int c;

protected:
    int d;

public:
    B(int i, int j)
    {
        c = i;
        d = j;
        cout << "B initialized " << endl;
    }
    void display_cd(void)
    {
        cout << "\nThe value of c is :" << c;
        cout << "\nThe value of d is :" << d;
    }
    int get_c(void)
    {
        return c;
    }
};
class C : public A, public B
{
    int e, f, total;
    ;

public:
    C(int m, int n, int o, int p, int q, int r) : A(m, n), B(o, p)
    {
        e = q;
        f = r;
        cout << "C initialized " << endl;
    }
    void sum(void)
    {
        total = get_a() + b + get_c() + d + e + f;
    }
    void display(void)
    {
        cout << "\nValue of e is :" << e;
        cout << "\nValue of f is :" << f;
        cout << "\nThe sum of a,b,c,d,e and f is :" << total;
    }
};
int main()
{
    C objc(10, 20, 30, 40, 50, 60);
    objc.display_ab();
    objc.display_cd();
    objc.sum();
    objc.display();
    return 0;
}