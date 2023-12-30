#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/*Singly Linked List*/
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
        }
        cout << "Memoey is free for node with data " << value << endl;
    }
};
void InsertAtHead(Node *(&head), int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    cout << endl
         << "Input values = ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void InsertAtTail(Node *&head, int d)
{
    Node *n = new Node(d);
    Node *tail = head;
    while (tail->next != NULL)
    {
        cout << "\nin tail = " << tail->data << endl;
        tail = tail->next;
    }
    tail->next = n;
    tail = n;
}

void InsertATPos(Node *(&head), int info, int pos)
{
    Node *n = new Node(info);
    Node *temp = head;
    if (pos == 1)
    {
        InsertAtHead(head, info);
    }
    else
    {
        int i = 1;
        while (i < pos - 1 && temp->next != NULL)
        {
            temp = temp->next;
            i++;
        }
        if (temp == NULL || temp->next == NULL)
            cout << endl
                 << "out of index" << endl;
        n->next = temp->next;
        temp->next = n;
    }
}
void DeleteATPos(Node *(&head), int pos)
{
    Node *temp = head;
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        int i = 1;
        while (i < pos - 1 && temp->next != NULL)
        {
            temp = temp->next;
            i++;
        }
        if (temp == NULL || temp->next == NULL)
            cout << endl
                 << "out of index" << endl;
        temp->next = (temp->next)->next;
    }
}
void DeleteByValue(Node *(&head), int value)
{
    Node *temp = head;
    if (head->data == value)
    {
        head = head->next;
    }
    else
    {

        while ((temp->next)->data != value && temp->next != NULL)
        {
            cout << endl
                 << (temp->next)->data;
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL)
            cout << endl
                 << "out of index" << endl;
        temp->next = (temp->next)->next;
    }
}

class Doubly
{
public:
    int data1;
    Doubly *prev;
    Doubly *next1;
    // Constructor
    Doubly(int data1)
    {
        this->data1 = data1;
        this->prev = NULL;
        this->next1 = NULL;
    }
    ~Doubly()
    {
        int val = this->data1;
        if (next1 != NULL)
        {
            next1 = NULL;
            delete next1;
        }
        cout << "\nFree for data = " << val << endl;
    }
};

void printDoubly(Doubly *(&head))
{
    Doubly *temp = head;
    while (temp != NULL)
    {
        cout << temp->data1 << " ";
        temp = temp->next1;
    }
    cout << endl;
}

int getLen(Doubly *(&head))
{
    Doubly *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next1;
    }
    return count;
}

void InsertATDoublyHead(Doubly *(&head), int data)
{
    Doubly *NODE = new Doubly(data);
    NODE->next1 = head;
    head->prev = NODE;
    head = NODE;
}
void InsertATDoublyTail(Doubly *(&head), int data)
{
    Doubly *temp = head;
    Doubly *NODE = new Doubly(data);
    while (temp->next1 != NULL)
    {
        temp = temp->next1;
    }
    NODE->prev = temp;
    temp->next1 = NODE;
}
void InsertAtDoublyPOS(Doubly *(&head), int pos, int data)
{
    Doubly *node = new Doubly(data);
    Doubly *temp = head;
    if (pos == 1)
    {
        node->next1 = head;
        head->prev = node;
        head = node;
    }
    else
    {
        int count = 1;
        while (count < pos - 1 && temp->next1 != NULL)
        {
            temp = temp->next1;
            count++;
        }
        if (temp->next1 == NULL || temp == NULL)
        {
            cout << "Inserted at End of list\n";
        }
        else
        {
            (temp->next1)->prev = node;
        }
        node->prev = temp;
        node->next1 = temp->next1;
        temp->next1 = node;
    }
}

void DeleteAtDoblyPos(Doubly *(&head), int pos)
{
    Doubly *temp = head;
    if (pos == 1)
    {
        if (temp->next1 != NULL)
        {
            (temp->next1)->prev = NULL;
        }
        head = temp->next1;
        delete temp;
    }
    else
    {
        int cnt = 1;
        while (cnt < pos - 1 && temp->next1 != NULL)
        {
            temp = temp->next1;
            cnt++;
        }
        if (temp->next1 == NULL || temp == NULL)
        {
            cout << "Out of list\n";
        }
        else
        {
            Doubly *nodeToDelete = temp->next1;
            if (nodeToDelete->next1 != NULL)
            {
                (nodeToDelete->next1)->prev = temp;
            }
            temp->next1 = nodeToDelete->next1;
            delete nodeToDelete;
        }
    }
}

class cll
{
public:
    int info;
    cll *tail;

    cll(int inf)
    {
        this->info = inf;
        this->tail = NULL;
    }

    ~cll()
    {
        int val = this->info;
        if (this->tail != NULL)
        {
            this->tail = NULL;
            delete tail;
        }
        cout << "\nFreed memory for the value = " << val << endl;
    }
};

void PrintCircular(cll *(&head))
{
    if (head == NULL)
    {
        cout << "List is empty.";
        return;
    }
    cll *curr = head;
    do
    {
        cout << curr->info << " ";
        curr = curr->tail;
    } while (curr != head && curr != NULL);
}

void insertNodeAtLast(cll *(&head), int value)
{
    cll *temp = new cll(value);
    if (head == NULL)
    {
        head = temp;
        temp->tail = head;
    }
    else if (head->tail == NULL)
    {
        head->tail = temp;
        temp->tail = head;
    }
    else
    {
        cll *last = head;
        while (last->tail != head)
        {
            last = last->tail;
        }
        last->tail = temp;
        temp->tail = head;
    }
    cout << endl;
}

int isEmpty(cll *(&head))
{
    if (head == NULL)
    {
        return 1;
    }
    return 0;
}

int getLengthCLL(cll *(&head))
{
    cll *curr = head;
    int count = 1;
    if (isEmpty(head))
    {
        return -1; // Return -1 for empty list.
    }
    else
    {
        while (curr->tail != head && curr->tail != NULL)
        {
            count++;
            curr = curr->tail;
        }
    }
    return count;
}
void deleteByPosInCLL(cll *(&head), int pos)
{
    if (head == NULL)
    {
        cout << "\nList is empty\n";
        return;
    }
    cll *temp = head;
    if (pos == 1)
    {
        while (temp->tail != head)
        {
            temp = temp->tail;
        }
        if (head == temp)
        {
            delete head;
            head = NULL;
        }
        else
        {
            temp->tail = head->tail;
            delete head;
            head = temp->tail;
        }
    }
    else
    {
        cll *prev = NULL;
        for (int i = 1; i < pos; i++)
        {
            prev = temp;
            temp = temp->tail;
            if (temp == head)
            {
                break;
            }
        }
        if (temp == head)
        {
            cout << "\nInvalid position\n";
        }
        else
        {
            prev->tail = temp->tail;
            delete temp;
        }
    }
}

void reverseDisplay(cll *node)
{
    static cll *head = node;
    if (node == NULL)
    {
        cout << "\nList is empty\n";
        return;
    }
    if (node->tail != head || node->tail == node)
    {
        reverseDisplay(node->tail);
    }
    cout << node->info << " ";
}
int main(int argc, char const *argv[])
{

    /*Singly Linked List
    Node *n1 = new Node(56);
    Node *h1 = n1;
    print(h1);
    InsertAtHead(h1, 23);
    print(h1);
    InsertAtTail(h1, 80);
    print(h1);
    InsertATPos(h1, 78, 3);
    print(h1);
    DeleteATPos(h1, 1);
    print(h1);
    DeleteByValue(h1, 78);
    cout << "\nDelete by values" << endl;
    print(h1);*/

    /* Doubly linked list
    Doubly *node = new Doubly(12);
    printDoubly(node);
    cout << "\nLength of current list is = " << getLen(node) << endl;
    // Inserting at the beginning
    InsertATDoublyHead(node, 94);
    printDoubly(node);
    InsertATDoublyTail(node, 949);
    printDoubly(node);
    InsertATDoublyTail(node, 98);
    InsertATDoublyHead(node, 489);
    printDoubly(node);
    InsertAtDoublyPOS(node, 3, 89);
    printDoubly(node);
    cout << "\nCalled delete\n";
    DeleteAtDoblyPos(node, 2);
    printDoubly(node);*/

    /*Circular linked list*/
    cll *head = new cll(2);
    PrintCircular(head);
    insertNodeAtLast(head, 4);
    insertNodeAtLast(head, 8);
    PrintCircular(head);
    insertNodeAtLast(head, 16);
    PrintCircular(head);
    insertNodeAtLast(head, 32);
    PrintCircular(head);
    insertNodeAtLast(head, 64);
    PrintCircular(head);
    int n = getLengthCLL(head);
    cout << " \nlength = " << n << endl;
    deleteByPosInCLL(head, 4);
    PrintCircular(head);
    reverseDisplay(head);
    return 0;
}