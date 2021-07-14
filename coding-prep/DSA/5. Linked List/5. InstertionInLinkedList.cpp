#include <stdio.h>
#include <stdlib.h> // for 'malloc'

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *last = NULL; // this is a global pointer

void display(struct Node *p)
{
    // Iterate over the linked list
    while (p != NULL)
    { // same as 'while (p)'
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int count(struct Node *p)
{
    int l = 0; // length is initially zero
    while (p)
    { // same as 'while (p != NULL)'
        l++;
        p = p->next;
    }
    return l; // return the length
}

// Time Complexity: O(n)
void insert(struct Node *p, int index, int x)
{

    // check if the index is valid
    if (index < 0 || index > count(p))
        return;

    struct Node *t = (struct Node *)malloc(sizeof(struct Node)); //temp
    t->data = x;

    //Now we need to link the new node 't' in the linked list
    if (index == 0)
    { // if '0', insert before 'first' node
        t->next = first;
        first = t;
    }
    else
    {
        // move pointer 'p' to correct position
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

// Time Complexity: O(1)
// 'first' and 'last' are global pointers
void insertLast(int x)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if (first == NULL)
        first = last = t;
    else
    {
        last->next = t;
        last = t;
    }
}

int main()
{
    insert(first, 0, 3);
    insert(first, 1, 5);
    insert(first, 2, 7);
    display(first);

    display(first);

    insert(first, 2, 45);

    insertLast(1);
    insertLast(2);

    display(first);

    return 0;
}