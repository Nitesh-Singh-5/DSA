// Head Recursion

#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        cout << n;
    }
}
int main()
{
    int x = 3;

    fun(x);
    return 0;
}

// Tail Recursion
#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n;
        fun(n - 1);
    }
}
int main()
{
    int x = 3;

    fun(x);
    return 0;
}

//Tree Recursion

#include <stdio.h>
void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1);
        fun(n - 1);
    }
}
int main()
{
    fun(3);
    return 0;
}

// Indirect Recursion
#include <stdio.h>
void funB(int n);
void funA(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 1)
    {
        cout << n;
        funA(n / 2);
    }
}
int main()
{
    funA(20);
    return 0;
}

//Nested Recursion
#include <iostream>
using namespace std;

int fun1(int n)
{
    if (n > 100)
        return n - 10;
    return fun1(fun1(n + 11));
}
int main()
{
    int r;
    r = fun1(95);
    cout << r;
    return 0;
}