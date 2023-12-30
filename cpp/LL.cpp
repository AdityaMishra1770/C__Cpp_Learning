#include <iostream>
#include <math.h>
#include <map>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

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
bool detectLOOP(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    std::map<Node *, bool> visited;
    Node *temp = head, *prev = head->next->next->next;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << endl
                 << prev->data << " is value for ";
            return 1;
        }
        visited[temp] = true;
        prev = prev->next;
        temp = temp->next;
    }
    return false;
}

void insertcircular(Node *&head, int value)
{
    Node *newnode = new Node(value);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
}


Node *floyDetectLOOP(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head, *fast = head;
    while (slow != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}


Node *getStart(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head, *intersection = floyDetectLOOP(head);
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLOOP(Node *&head)
{
    if (head == NULL)
    {
        cout << "\nEmpty List\n";
    }
    Node *temp = getStart(head);
    while (temp->next != getStart(head))
    {
        temp = temp->next;
    }
    cout<<temp->data;
    temp->next = NULL;
}

int main(int argc, char const *argv[])
{
    /* Create a linked list: 10 -> 20 -> 30 -> 40 */
    Node *head = NULL;
    InsertAtHead(head, 10);
    print(head);
    InsertAtTail(head, 20);
    print(head);
    InsertAtTail(head, 30);
    print(head);
    insertcircular(head, 40);
    // print(head);

    if (detectLOOP(head))
    {
        cout << "Loop present in the Linked List." << endl;
    }
    else
    {
        cout << "Loop is absent" << endl;
    }
    if (floyDetectLOOP(head))
    {
        cout << "Floyd detect loop, Loop present in the Linked List." << endl;
    }
    else
    {
        cout << "Loop is absent" << endl;
    }
    cout << getStart(head)->data;

    removeLOOP(head);
    cout << "\nList after removing LOOP : ";
    print(head);
    return 0;
}