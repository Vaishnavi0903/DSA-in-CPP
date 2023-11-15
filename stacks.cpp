#include <iostream>
#include <string>
using namespace std;
#define n 20

class stack
{
    int *arr; // using array to store the values but it will be operating like a stack.
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        top--;
    }
    bool isempty()
    {
        return (top == -1);
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "stack is empty" ;
            return -1;
        }
        return arr[top];
    }
};
int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<s1.Top()<<endl;
    s1.pop();
    cout<<s1.isempty()<<endl;
    s1.pop();
    s1.pop();
    cout<<s1.Top()<<endl;
    cout<<s1.isempty();
    return 0;
}