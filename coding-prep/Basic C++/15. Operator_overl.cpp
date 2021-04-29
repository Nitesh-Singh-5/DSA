#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void get_data()
    {
        cin >> a >> b;
    }
    void show_data()
    {
        cout << a << " " << b << endl;
    }
    Complex operator+(Complex x) // add(Complex x)
    {
        Complex c;
        c.a = a + x.a;
        c.b = b + x.b;
        return c;
    }
};

int main()
{
    Complex c1, c2, c3;
    cout << "Enter value of a:" << endl;
    c1.get_data();
    cout << "Enter value of b:" << endl;
    c2.get_data();
    c3 = c1 + c2; //     c1.add(c2)
    c3.show_data();
    return 0;
}