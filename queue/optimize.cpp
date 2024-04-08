#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front ;
    int rear ;

public:
    Queue(int n){
        front = -1;
        rear = -1;
        size = n;
        arr = new int[n];
    }

   
    void Enqueu(int data){
         
        if((rear+1) % size == front)
        {
            cout << "Queue is Full";
            return;
        }

        if(front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = data;
    }
    


    int Dequeue()
    {
        if( front == -1)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        
        int ans = arr[front];

        if(front == rear)
        {
            front = rear = -1;
        }
       else {
        front = (front + 1) % size;
       }
        return ans;
    }
};

int main()
{
    
    
 Queue *q = new Queue(5);
 q->Enqueu(1);
 q->Enqueu(2);
  q->Enqueu(3);
   q->Enqueu(4);
    q->Enqueu(5);
 cout<<q->Dequeue();
 cout<<q->Dequeue();
 cout<<q->Dequeue();
 cout<<q->Dequeue();
 

 return 0;
}