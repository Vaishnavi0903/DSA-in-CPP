#include <iostream>
using namespace std;

// creation of node
class node
{
public:
    int data;
    node *next;

    // constructor
    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "\nmemory is free at value: " << value << endl;
    }
};

// adding new node at the beginning or at the head
void insertAtHead(node *&head, int data)
{
    // create a new node first
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
// adding new node at the tail portion
void insertAtTail(node *&tail, int data)
{ // here '&' symbol is very important "call by reference"
    // create new node                                              changes are made in actual memory location
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}

// adding node at nth position
void insertAtMid(node *&head, node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    else
    {
        node *nodeToInsert = new node(data);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }
}

// deleting node
void deletenode(int position, node *&head)
{
    if (position == 1)
    {
        // deleting first node
        node *temp = head;
        head = head->next;
        // memory free
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting node at nth position or last position
        node *curr;
        node *prev;
        curr = head;
        prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void deletebyval(int val, node *&head)
{
    node *current = head;
    node *prev = NULL;
    while (current->data != val)
    {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    current->next = NULL;
    delete current;
}
void search(int val, node *&head)
{
    node *curr = head;
    int count = 1;
    while (curr->data != val)
    {
        curr = curr->next;
        count++;
        if (curr -> next == NULL)
        {
            if (curr -> data != val)
            {
               cout <<endl<<val<< " not found" ;
            }
        }
    }
    if (curr->data == val)
    {
        cout << endl<< val << " is found at position " << count;
    }
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *node1 = new node(10);

    // printing the data and next block of first node
    cout << "first node to be created has:" << endl;
    cout << "data=" << node1->data << endl;
    cout << "next block=" << node1->next << endl;

    // insertion at the head
    node *head = node1;
    insertAtHead(head, 20);
    // insertAtHead(head, 23);
     cout << "inserting at head:" << endl;
     print(head);

    // insertion at tail
     node *tail = node1;
     insertAtTail(tail, 50);
    // insertAtTail(tail, 35);
     cout << "\ninserting at tail:" << endl;
     print(head);

    // insertion at nth position
    cout << "\ninserting at nth position: " << endl;
    insertAtMid(head, tail, 1, 12);
    insertAtMid(head, tail, 3, 72);
   // insertAtMid(head, tail, 8, 5);
    print(head);
    cout << endl;

    // deleting a node
    // deletenode(1, head);
    // deletenode(7, head);
    // print(head);

     deletebyval(12, head);
     print(head);
  
    // search(35 , head);
    // search(55, head);
}