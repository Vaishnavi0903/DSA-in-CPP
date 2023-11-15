 #include <iostream>
 using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }

//     ~node()
//     {
//         int value = this->data;
//         if (this->next != NULL)
//         {
//             delete next;
//             this->next = NULL;
//         }
//         cout <<endl<< "memory is free at " << value<<endl ;
//     }
// };
// void insertnode(int element, int data, node *&tail)
// {
//     // if list is empty
//     if (tail == NULL)
//     {
//         node *newnode = new node(data);
//         tail = newnode;
//         newnode->next = newnode;
//     }
//     else
//     {
//         // list is not empty
//         // assuming element is present in the list

//         node *curr = tail;
//         while (curr->data != element)
//         {
//             curr = curr->next;
//         }
//         node *temp = new node(data);
//         temp->next = curr->next;
//         curr->next = temp;
//     }
// }
// void print(node *&tail)
// {
//     node *temp = tail;

//     if (tail == NULL){
//         cout<<"list is empty"<<endl;
//     }
//     do
//     {
//         cout << tail->data << " ";
//         tail = tail->next;
//     } while (tail != temp);
// }

// void deletenode(int val , node * &tail)
// {
//     if (tail == NULL)
//     {
//         cout<<"list is empty pls check again"<<endl;
//     }
//     else{
//     node * prev = tail;
//     node * curr = prev -> next;
//     while (curr -> data != val)
//     {
//           prev = curr;
//           curr = curr -> next;
//     }
//     prev -> next = curr -> next;
//     //single node 
//     if (curr == prev)
//     {
//         tail = NULL;
//     }
//     //>=2 n0. 0f nodes
//     else if (tail = curr)
//     {
//         tail = prev;
//     }
//     curr -> next = NULL;
//     delete curr;
//     }

// }   
// int main()
// {
//      node *tail = NULL;
//      insertnode(1, 32, tail);
//      insertnode(32,55,tail);
//     // insertnode(32,56,tail);
//     // insertnode(55,78,tail);
//     print(tail);
//     deletenode(32,tail);
//     print(tail);
//     return 0;
// }


/*FACTORIAL OF A NUMBER USING LOOP*/

// int main()
// {
//     int n ;
//     cin>>n;
//     int mul = 1 ;
//     for(int i = n ; i>0 ; i--)
//     {
//            mul=mul*i;
//     }
//     cout<<mul;
//     return 0;
// }


/*PRIME NUMBER OR NOT*/

int main()
{
    int n;
    cin>>n;
    for (int i = 2;i<n;i++)
    {
        if(n==2)
        {
            cout<<"prime";
            break;
        }
        
        else if(n%i != 0)
        {
            cout<<"prime";
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}