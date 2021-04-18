#include <iostream>
// #include <conio.h>
using namespace std;
int area(int, int);
float area(int);
float area(int R)
{
    return (3.14 * R * R);
}
int area(int L, int B)
{
    return (L * B);
}
int main()
{
    int r, l, b;
    cout << "Enter Radius of circle :" << endl;
    cin >> r;
    cout << "Area of circle :" << area(r) << endl;
    cout << "Enter Length and Breadth of Rectangle :" << endl;
    cin >> l >> b;
    cout << "Area of Rectange :" << area(l, b);
    return 0;
    // getch();
}