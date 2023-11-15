#include <iostream>
using namespace std;

class node
{
    public:
    char label[50];
    int child_node;
    node *child[10];
};

class BST
{
    public:
    node * root;
    void create()
    {
        root = new node();
        cout<<"Enter the name of he book : ";
        cin>>root -> label;
        cin.ignore();
        cout<<"Enter the number of chapters in the book : ";
        cin>> root -> child_node;
       
        for (int i=0; i < root -> child_node ; i++)
        {
            root -> child[i] = new node();
            cout<<"Enter the name of the chapter :";
            cin>>root -> child[i] -> label;
            cin.ignore();
            cout<<"Enter the number of sections in each chapter :";
            cin>>root -> child [i]-> child_node;
           
            for(int j = 0; j<root -> child[i]-> child_node ; j++)
            {
                root -> child[i] ->child[j] = new node();
                cout<<"Enter the name of the section : ";
                cin>>root -> child[i] -> child[j] -> label;
                cin.ignore();
                cout<<"Enter the number of sub-sections in the section : ";
                cin>>root -> child[i] -> child[j] -> child_node;
                for(int k =0;k < root -> child[i]-> child[j]-> child_node ; k++)
                {
                    root -> child[i] -> child[j] -> child[k] = new node();
                    cout<<"Enter the name of sub sections in the section : ";
                    cin>>root -> child[i] -> child[j] -> child[k] -> label;
                }
            }
        }
       
    }
   
    void display()
    {
        node * temp;
        temp = root;
        cout<<"Book Name : "<<root -> label <<endl;
        for (int i = 0;i<temp -> child_node ; i++)
        {
            cout<<"\nChapter"<<i+1<<" : "<<root->child[i] -> label;
            for (int j = 0; j< root -> child[i] -> child_node ; j++)
            {
                cout<<"\n\t\tSections"<<j+1<<" : "<<root->child[i] -> child[j] -> label;
                for (int k = 0; k< root -> child[i]-> child[j] -> child_node ; k++)
                {
                    cout<<"\n\t\t\t\tSub-sections"<<k+1<<" : "<<root->child[i] -> child[j] ->child[k]-> label;
                }
            }
        }
       
    }
};


int main() {
    // Write C++ code here
    BST book;
    book.create();
    book.display();
    return 0;
}
