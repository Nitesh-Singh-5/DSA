// Cpp Template Example Program

#include <iostream>
using namespace std;

template <class X>
X big(X a, X b)
{
    if (a > b)
    {
        return a;
    }
    else
        return (b);
}
int main()
{
    cout << big(4, 5) << endl;
    cout << big(3.5, 7.6) << endl;
}
