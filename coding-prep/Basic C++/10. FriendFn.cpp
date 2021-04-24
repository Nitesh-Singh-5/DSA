// Basic Friend Function Program

#include <iostream>
using namespace std;
class Sum
{
    int a, b;

public:
    void getdata();
    friend int add();
};
void Sum ::getdata()
{
    cout << "Enter Two number :" << endl;
    cin >> a >> b;
}
int add()
{
    Sum s;
    int temp;
    s.getdata();
    temp = s.a + s.b; // accessing a and b i.e private data with friend function
    return temp;
}
int main()
{
    int result = add();
    cout << "Sum = " << result;
    return 0;
}