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
