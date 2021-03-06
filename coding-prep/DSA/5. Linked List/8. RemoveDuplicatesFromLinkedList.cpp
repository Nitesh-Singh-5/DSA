#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->data);
        ptr = ptr->next;
    }

    printf("null");
}

void push(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void removeDuplicates(struct Node *head)
{
    if (head == NULL)
    {
        return;
    }

    struct Node *current = head;

    while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            struct Node *nextNext = current->next->next;
            free(current->next);
            current->next = nextNext;
        }
        else
        {
            current = current->next;
        }
    }
}

int main(void)
{
    int keys[] = {1, 2, 2, 2, 3, 4, 4, 5};
    int n = sizeof(keys) / sizeof(keys[0]);

    struct Node *head = NULL;

    for (int i = n - 1; i >= 0; i--)
    {
        push(&head, keys[i]);
    }

    removeDuplicates(head);

    printList(head);

    return 0;
}
