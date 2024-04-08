#include<bits/stdc++.h>
using namespace std;


class Queue{
    public:
    int *arr;
    int size;
    int front , rear;

    Queue(int n)
    {
      front = -1;
      rear = -1;
      size = n;
      arr = new int[n];
    }

    void Enqueue(int data)
    {
        if((rear+1)%size== front){
            cout << "Full";
            return;
        }
        if(front == -1)
        {
            front = 0;
        }
        rear = rear + 1;
        arr[rear] = data;
    }


void display(){
        for (int i = 0; i < rear+1; i++)
        {
            cout << arr[i];
        }
    }
};

int main()
{
    Queue *q = new Queue(5);
    q->Enqueue(1);
    q->Enqueue(2);
    q->Enqueue(3);
    q->Enqueue(4);

    q->display();
    return 0;
}