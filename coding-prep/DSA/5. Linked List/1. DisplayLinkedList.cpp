#include <stdio.h>
#include <stdlib.h> // for 'malloc'

struct Node
{
    int data;
    struct Node *next;
} *first = NULL; // this is a global pointer

void create(int A[], int n)
{
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)
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

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(first);
    return 0;
}