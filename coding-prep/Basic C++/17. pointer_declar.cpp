// Declaration of pointers

#include <bits/stdc++.h>
using namespace std;
class Laptop
{
public:
    int Ram;
};
int main()
{
    int Laptop ::*pRam; // int Laptop :: *pRam = &Laptop ::Ram
    pRam = &Laptop::Ram;

    Laptop c1;
    c1.Ram = 1;
    cout << "Ram is " << c1.Ram << endl;
    c1.*pRam = 2;
    cout << "Ram is " << c1.Ram << endl;
    return 0;
}