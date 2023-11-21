#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *current = NULL;

void insertAtBeg(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = head;
    head = p;
}

void insertAtEnd(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    struct node *ptr = head;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = newNode;
    newNode->next = NULL;
}

void insertAtPos(struct node *list, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = list->next;
    list->next = newNode;
}

void printList()
{
    struct node *p = head;
    while (p != NULL)
    {
        cout << p->data << "-> ";
        p = p->next;
    }
}
int main()
{
    insertAtBeg(5);
    insertAtBeg(6);
    insertAtBeg(7);
    printList();
    cout << "\nAfter insertin at the end of the list" << endl;
    insertAtEnd(10);
    printList();
    return 0;
}