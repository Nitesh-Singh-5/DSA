#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *next;
};

Node *newNode(int key)
{
    Node *temp = new Node;
    temp->key = key;
    temp->next = NULL;
    return temp;
}

bool detectLoop(Node *head)
{

    if (!head)
        return 0;
    else
    {

        while (head)
        {
            // If loop found
            if (head->key == -1)
            {
                return true;
            }

            else
            {
                head->key = -1;
                head = head->next;
            }
        }
        return 0;
    }
}

int main()
{
    Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    head->next->next->next->next->next = head->next->next;

    bool found = detectLoop(head);
    cout << found << endl;
    return 0;
}