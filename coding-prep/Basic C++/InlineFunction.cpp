#include <iostream>
inline void fun();
using namespace std;
int main()
{
    cout << "You are in main" << endl;
    fun();
    return 0;
}
void fun()
{
    cout << "you are in fun";
}