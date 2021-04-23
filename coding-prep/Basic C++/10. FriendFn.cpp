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

int main()
{
    int result = add();
    cout << "Sum = " << result;
    return 0;
}