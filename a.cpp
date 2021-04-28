#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, m, x, flag = 0;
    cin >> n;
    cin >> m;
    int a[n];
    int b[m];
    cout << "enter a:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter b:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            x = a[n - 1] * j;
            if (b[i] % x == 0)
                flag++;
        }
    }
    cout << flag;

    return 0;
}