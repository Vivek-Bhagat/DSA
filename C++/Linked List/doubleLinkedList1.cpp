#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtHead(int data)
{
    struct node *newNode = createNode(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int data)
{
    struct node *newNode = createNode(data);
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = NULL;
}

void print()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void printReverse()
{
    struct node *temp = head;
    if (temp == NULL)
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
    cout << "Reverse of the linked list is : ";
    while (temp != NULL)
    {
        cout << "<- " << temp->data;
        temp = temp->next;
    }
    cout << " NULL" << endl;
}

int main()
{
    insertAtHead(6);
    insertAtHead(5);
    insertAtHead(7);
    insertAtEnd(8);
    print();
    printReverse();
    return 0;
}