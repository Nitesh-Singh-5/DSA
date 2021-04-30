// Declaration of pointers in member function

#include <bits/stdc++.h>
using namespace std;
class Laptop
{
    int Ram;

public:
    int usb;
    void getdata(int a)
    {
        Ram = a;
    }
    void disp()
    {
        cout << "RAM: " << Ram << endl;
        cout << "USB: " << usb << endl;
    }
};
int main()
{
    Laptop dell;
    Laptop *pdell;
    pdell = &dell;
    pdell->usb = 3; // (*pdell).usb=3
    pdell->getdata(20);
    pdell->disp();
    return 0;
}