#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

bool isSortedDesc(struct Node *head)
{
    // Base cases
    if (head == NULL || head->next == NULL)
        return true;

    return (head->data > head->next->data &&
            isSortedDesc(head->next));
}

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->next = NULL;
    temp->data = data;
}

int main()
{
    struct Node *head = newNode(7);
    head->next = newNode(5);
    head->next->next = newNode(4);
    head->next->next->next = newNode(3);

    isSortedDesc(head) ? cout << "Yes" : cout << "No";

    return 0;
}