// Returning objects

#include <iostream>
using namespace std;
class matrix
{
    int item[3][3];

public:
    void getdata();
    void putdata();
    matrix add(matrix, matrix);
};
void matrix ::getdata()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> item[i][j];
        }
    }
}
void matrix ::putdata()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << item[i][j] << "\t";
        }
        cout << endl;
    }
}
matrix matrix ::add(matrix m, matrix n)
{
    matrix h;
    int i, j;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            h.item[i][j] = m.item[i][j] + n.item[i][j];
        }
    }
    return h;
}
int main()
{
    matrix a, b, c, result;
    cout << "Enter matrix A :" << endl;
    a.getdata();
    cout << "Enter matrix B :" << endl;
    b.getdata();
    cout << "Matrix A :" << endl;
    a.putdata();
    cout << endl
         << "Matrix B :" << endl;
    b.putdata();
    cout << endl
         << "Sum of matrix a and b :" << endl;
    result = c.add(a, b);
    result.putdata();
    return 0;
}