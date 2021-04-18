#include <iostream>
using namespace std;
int area(int, int);
int area(int);
int area(int R)
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
    cout << "Area of circle :" << area(r);
}