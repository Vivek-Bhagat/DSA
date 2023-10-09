#include <iostream>
using namespace std;

// create a class node and create a pointer that points a next-node

class node
{
public: // make the class public so that it can be accessible from anywhere in local
    // define some data
    int data;
    node *next; // created a pointer that points the next node of the linked list

    // create a constructor that accepts the value in the node
    node(int val)
    {
        data = val;  // data that accept the value
        next = NULL; // this points to the null list
    }
};

// inserting the value at the head of the linked list
void insertAtHead(node *&head, int val)
{
    node *n = new node(val); // new node creation
    n->next = head;          // points the new node to the head and creates a node null
    head = n;                // make the equal
}

// inserting value at the end of the linked list
void insertTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n; // this points to the first node bcz no node is present in the list

        return;
    }

    node *temp = head;         // points the fist node
    while (temp->next != NULL) // check till the head becomes null
    {
        temp = temp->next; // add the new node before the last node NULL
    }
    temp->next = n;
}

// print the list
void display(node *head)
{
    node *temp = head; // creates a pointer that points to the head of the list

    while (temp != NULL)
    {
        cout << temp->data << " -> "; // prints the data of the node
        temp = temp->next;            // points to the next node
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);
}