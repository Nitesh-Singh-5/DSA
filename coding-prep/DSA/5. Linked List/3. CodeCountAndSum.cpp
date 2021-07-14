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

// we can also pass the parameter by value since we are not modifying it
// 'p' is a copy of 'first' pointer.
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

// recursive version of 'display function'
// 'p' is a copy of 'first' pointer.
// Time Complexity: O(n)
// Space Complexity: O(n)
void recDisplay(struct Node *p)
{
    if (p != NULL)
    { // same as 'if (p)'
        printf("%d ", p->data);
        recDisplay(p->next);
    }
}

// displays the linked list data in reverse order
// 'p' is a copy of 'first' pointer.
// Time Complexity: O(n)
// Space Complexity: O(n)
void revRecDisplay(struct Node *p)
{
    if (p != NULL)
    { // same as 'if (p)'
        revRecDisplay(p->next);
        printf("%d ", p->data);
    }
}

// counts the number of nodes in the linked list.
// 'p' is a copy of 'first' pointer.
// Time Complexity: O(n)
// Space Complexity: O(1)
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

// recursive version of 'count function'
// 'p' is a copy of 'first' pointer.
// Time Complexity: O(n)
// Space Complexity: O(n)
int recCount(struct Node *p)
{
    if (p) // same as 'if (p != NULL)'
        return recCount(p->next) + 1;
    else
        return 0;
}

// sums up all of the elements in the linked list
// 'p' is a copy of 'first' pointer.
// Time Complexity: O(n)
// Space Complexity: O(1)
int sum(struct Node *p)
{
    int s = 0;
    while (p)
    { // same as 'while (p != NULL)'
        s += p->data;
        p = p->next;
    }
    return s;
}

// recursive version of 'sum function'
// 'p' is a copy of 'first' pointer.
// Time Complexity: O(n)
// Space Complexity: O(n)
int recSum(struct Node *p)
{
    if (!p) // same as 'if (p == NULL)'
        return 0;
    else
        return recSum(p->next) + p->data;
}

int main()
{
    int A[] = {3, 5, 7, 10, 15, 8, 12, 20};
    create(A, 8);
    printf("[Iterative] Length is %d\n", count(first));
    printf("[Recursive] Length is %d\n", recCount(first));
    printf("[Iterative] Sum is %d\n", sum(first));
    printf("[Recursive] Sum is %d\n", recSum(first));

    return 0;
}