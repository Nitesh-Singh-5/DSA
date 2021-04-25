//Returning object with friend function

#include <iostream>
using namespace std;
class Sum
{
    int a, b;

public:
    void get_number(void);
    void putdata(void);
    friend Sum add(Sum s)
    {
        Sum temp;
        temp.a = s.a + s.b;
        return temp;
    }
};
void Sum ::get_number()
{
    cout << "Enter any two number :" << endl;
    cin >> a >> b;
}
void Sum ::putdata()
{
    cout << "Addition :" << a;
}
int main()
{
    Sum z, result;
    z.get_number();
    result = add(z);
    result.putdata();
    return 0;
}