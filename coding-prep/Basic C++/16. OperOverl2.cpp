#include <iostream>
using namespace std;
class Integer
{
    int a;

public:
    void get_data()
    {
        cin >> a;
    }
    void show_data()
    {
        cout << a << endl;
    }
    Integer operator++() //Pre increment
    {
        Integer i;
        i.a = ++a;
        return i;
    }
    Integer operator++(int) //post increment
    {
        Integer i;
        i.a = a++;
        return i;
    }
};
int main()
{
    Integer i1, i2;
    i1.get_data();
    i1.show_data();
    i2 = i1++; //   i2=i1.operator++();
    i2.show_data();
    i2 = ++i1;
    i2.show_data();
    return 0;
}