#include <iostream>
using namespace std;
#define n 6
class circularqueue
{
private:
    int *arr;
    int front;
    int rear;

public:
    circularqueue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void push(int x)
    {
        if (front == ((rear + 1) % n))
        {
            cout << "circular queue is full!!" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = x;
        }
        else
        {
            rear = (rear + 1) % n;
            arr[rear] = x;
        }
    }

    void pop()
    {
        if (front == rear == -1)
        {
            cout << "queue is empty!!" << endl;
        }
        else if (rear == front)
        {
            rear = front = -1;
        }
        else
        {
            front = (front + 1) % n;
        }
    }

    bool isEmpty()
    {
        if (front == rear == -1)
        {
            return 1;
        }
        return 0;
    }

    bool isFull()
    {
        if (front == ((rear + 1) % n))
        {
            return true;
        }
        return false;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "empty queue" << endl;
        }
        else
        {
            int i = front;
            while (i != rear )
            {
                cout << arr[i] << " ";
                i = (i + 1) % n;
            }
            cout<<arr[i];
        }
        cout << endl;
    }
};

int main()
{
    circularqueue q;
    q.push(4);
    q.push(6);
    q.push(7);
    q.push(9);
    q.push(10);
    q.push(11);

    q.display();
    cout << "isempty ?? " << q.isEmpty() << endl;
    cout << "isfull ?? " << q.isFull() << endl;
    return 0;
}