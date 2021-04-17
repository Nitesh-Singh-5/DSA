#include <iostream>
using namespace std;
inline void fun();
void main()
{
    cout << "You are in main" << endl;
    fun();
}
void fun()
{
    cout << "you are in fun";
}