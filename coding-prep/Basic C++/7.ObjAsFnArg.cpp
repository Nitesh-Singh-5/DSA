// Objects as FUnction Arguments

#include <iostream>
using namespace std;
class Total
{
    int n;

public:
    void getdata();
    void putdata();
    void add(Total, Total);
};
void Total ::getdata()
{
    cout << "Enter a number :" << endl;
    cin >> n;
}
void Total ::putdata()
{
    cout << n << endl;
}
void Total ::add(Total x, Total y)
{
    n = x.n + y.n;
}
