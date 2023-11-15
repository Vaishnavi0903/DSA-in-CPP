#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if ((this->next != NULL) && (this->prev != NULL))
        {
            delete next;
            delete prev;
            this->next = NULL;
            this->prev = NULL;
        }
        cout << "memory is free at value " << value << endl;
    }
};
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getlength(node *&head)
{
    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(int data, node *&head)
{
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(int data, node *&tail)
{
    node *temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtMid(int position, int data, node *&head, node *&tail)
{

    node *curr = new node(data);
    node *after = head;
    node *before = NULL;

    if (position == 1)
    {
        insertAtHead(data, head);
        return;
    }
    int count = 1;
    while (count < position)
    {
        before = after;
        after = after->next;
        count++;
    }
    if (tail->next == NULL)
    {
        insertAtTail(data, tail);
        return;
    }
    curr->next = before->next;
    after->prev = curr;
    curr->prev = before;
    before->next = curr;
}

// deleting a node
void delbyval(int position, node *&head)
{
    if (position == 1)
    {
        node * temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp ;
    }
    else 
    {
        node * curr = head;
        node * prev = NULL;

        int count =1;
        while (count < position)
        {
            prev = curr;
            curr = curr -> next;
            count ++ ;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

// search in list
void search(int val, node *&head)
{
    node *temp = head;
    int count = 1;
    while (temp->data != val)
    {
        temp = temp->next;
        count++;
        if (temp->next == NULL)
        {
            if (temp->data != val)
            {
                cout << val << " not found" << endl;
            }
            return;
        }
    }
    if (temp->data == val)
    {
        cout << val << " is found at position " << count << endl;
        return;
    }
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);
    cout << "length is " << getlength(head) << endl;

    cout << "inserted at head" << endl;
    insertAtHead(13, head);
    print(head);

    cout << "inserted at tail" << endl;
    insertAtTail(34, tail);
    print(head);

    cout << "inserted at mid" << endl;
    insertAtMid(2, 25, head, tail);
    print(head);

    delbyval(3, head);
    print(head);

    search(55, head);
}
