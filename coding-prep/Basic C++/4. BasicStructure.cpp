#include <iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(book);
book input();
book input()
{
    book b;
    cout << "Enter BookId, Title and Price of the Book :" << endl;
    cin >> b.bookid >> b.title >> b.price;
    return b;
}
void display(book b)
{
    cout << endl
         << b.bookid << " " << b.title << " " << b.price;
}
int main()
{
    book b1;
    b1 = input();
    display(b1);
    return 0;
}
