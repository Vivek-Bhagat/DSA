#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void insertAtBeg(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = head;
    head = p;
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
    printList();
    return 0;
}