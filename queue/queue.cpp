#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *arr;
    int rear;
    int size;

    Queue(int n)
    {
        rear = -1;
        size = n;
        arr = new int[n];
    }

    void Enque(int data)
    {
        if (rear + 1 == size)
        {
            cout << "queue is full";
            return;
        }
        rear = rear + 1;
        arr[rear] = data;
    }

    int Dequeue(){
        if(rear == -1)
        {
            cout<<"empty queue";
            return -1;
        }
        int ans = arr[0];
        for(int i = 0; i<rear;i++)
        
        {
            arr[i] = arr[i+1];
        }
        rear-=1;
        return ans;
    }

    void display()
    {
        for (int i = 0; i <= rear;i++)
        {
            cout << arr[i] << " ";
        }
    }

    int getTop()
    {
        if(rear==-1)
        {
            cout << "Queue is Empty" << endl;
        }
        return arr[0];
    }
};



int main()
{

    Queue *q = new Queue(5);

    q->Enque(1);
    q->Enque(2);
    q->Enque(3);
    q->Enque(4);
    q->Enque(5);
    q->Enque(6);

    q->display();

    cout << endl;
    cout << q->Dequeue();
    cout << q->Dequeue();
    cout << q->Dequeue();
    cout << q->Dequeue();
    cout << q->Dequeue();
    cout << q->Dequeue();

    return 0;
}