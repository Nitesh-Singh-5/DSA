#include <stdio.h>
#include <stdlib.h>

void createList(int n);
void reverse_list();
void displayList();

//Creating node with data and a pointer
struct Node
{
    int data;
    struct Node *next;
} * head;

// Function to reverse the linked list
void reverse_list()
{
    // Initialize current, previous and next pointers
    struct Node *current = head;
    struct Node *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        // Store next
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead
        prev = current;
        current = next;
    }
    head = prev;
}

void createList(int n)
{
    struct Node *newNode, *temp;
    int data, i;
    head = (struct Node *)malloc(sizeof(struct Node));
    // When the list is empty
    if (head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("\nEnter the data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;
        for (i = 2; i <= n; i++)
        {
            newNode = (struct Node *)malloc(sizeof(struct Node));
            if (newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("\nEnter the data of node %d: ", i);
                scanf("%d", &data);
                newNode->data = data;
                newNode->next = NULL;
                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
}

void displayList()
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        //Print the list
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("\nEnter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nThe List is \n");
    displayList();
    printf("\nThe Reversed Linked List is\n");
    reverse_list();
    displayList();
    return 0;
}