// Array Size

#include <iostream>
using namespace std;

int main()
{
    int *p, *q;
    int i;
    p = new int[5];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    q = new int[5];

    for (i = 0; i < 5; i++)
        q[i] = p[i];

    delete[] p;

    p = q;
    q = NULL;

    for (i = 0; i < 5; i++)
        printf("%d \n", p[i]);

    return 0;
}