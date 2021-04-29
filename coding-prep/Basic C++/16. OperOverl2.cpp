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
