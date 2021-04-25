// Multi Level Inheritence

#include <iostream>
using namespace std;

class A
{
protected:
    int x;

public:
    void get_x(void);
};
class B
{
protected:
    int y;

public:
    void get_y(void);
};
class C : public A, public B
{
    int sum;

public:
    void add(void);
    void disp(void);
};
void A ::get_x(void)
{
    cout << "Enter value of x :" << endl;
    cin >> x;
}
void B ::get_y(void)
{
    cout << "Enter value of Y :" << endl;
    cin >> y;
}
void C ::add(void)
{
    sum = x + y;
}
void C ::disp(void)
{
    cout << "value of x :" << x << endl;
    cout << "value of y :" << y << endl;
    cout << "value of sum :" << sum << endl;
}

int main()
{
    C num;
    num.get_x();
    num.get_y();
    num.add();
    num.disp();
    return 0;
}