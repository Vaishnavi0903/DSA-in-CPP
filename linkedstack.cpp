#include <iostream>
using namespace std;
class stack
{
private:
    typedef struct node
    {
        int data;
        node *next;
    } node;
    node *head;

public:
    stack()
    {
        head = NULL;
    }
    ~stack()
    {
        node *temp = head;
        if (temp == NULL)
        {
            delete temp;
        }
    }
    void create()
    {
        int data;
        cout << "enter data";
        cin >> data;
        push(head, data);
    }
    void push(node *&head, int val)
    {
        node *temp = new node;
        temp->data = val;
        temp->next = head;
        head = temp;
    }
    void remove()
    {
        pop(head);
    }
    void pop(node *&head)
    {
        node *temp = head;
        if (isempty(temp) == 1)
        {
            cout << "stack empty!!";
            return;
        }
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    int isempty(node *&temp)
    {
        if (temp == NULL)
        {
            return 1;
        }
        return 0;
    }
    void show()
    {
        display(head);
    }
    void display(node *&head)
    {
        node *temp = head;
        if (isempty(temp) == 1)
        {
            cout << "stack empty!!";
            return;
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data;
    }
};

int main()
{
    stack st;
    int t=20;
    int a;
    while(t--)
    {
      cout<<"\n1)push  2)pop  3)display  4)exit ";
      cout<<"\nenter your choice:";
      cin>>a;
      switch (a)
      {
        case 1:st.create();
               break;
        case 2:st.remove();
               break;
        case 3:st.show();
               break;
        case 4:exit(0);  
      }
    };
}