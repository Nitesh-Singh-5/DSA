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
