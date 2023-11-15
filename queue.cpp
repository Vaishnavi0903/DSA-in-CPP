#include <iostream>
using namespace std;
#define n 5
class queue
{
private:
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "queue overflow" << endl;
        }

        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "queue has no element" << endl;
        }

        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "queue has no element" << endl;
        }

        return arr[front];
    }

    bool empty()
    {

        if (front == -1 || front > back)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void display()
    {
        for (int i = front; i <= back; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    queue q;

    q.push(2);
    q.push(3);
    q.push(5);
    q.push(9);

    cout << "elements in queue are: ";
    q.display();
    cout << endl;

    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();

    cout << "elements in queue are: ";
    q.display();
    cout << endl;

    cout << "is queue empty?? " << q.empty() << endl;

    return 0;
}
