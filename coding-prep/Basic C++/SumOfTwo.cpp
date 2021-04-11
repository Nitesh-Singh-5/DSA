// Default argument concept

#include <iostream>
#include <conio.h>
using namespace std;
int sum(int, int, int = 0, int = 0);

int sum(int x, int y, int z, int w)
{
    return (x + y + z + w);
}
int main()
{
    // int a, b, c;
    // cout << "insert two numbers :" << endl;
    // cin >> a >> b;
    // cout << sum(a, b);
    // cout << "insert three numbers :" << endl;
    // cin >> a >> b >> c;
    // cout << sum(a, b, c) << endl;
    cout << sum(2, 6) << endl;
    cout << sum(10, 33, 22) << endl;
    cout << sum(12, 34, 22, 56) << endl;
    getch();
    return 0;
}