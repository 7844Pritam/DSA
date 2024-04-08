

#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:

    int size;
    int *arr;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void Push(int element)
    {
        if ((size - top) > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is full";
        }
    }

    int pop()
    {
        int x = 0;
        if (top == -1)
        {
            cout << "stack is undrflow";
        }
        else
        {
            x = arr[top];
            top--;
        }
        return x;
    }

    int Peek()
    {
        if ((size - top) > 1)
        {
            return arr[top];
        }
        else
        {
            return 0;
        }
    }

    bool isFull()
    {
        if ((size - top) <= 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    Stack st(6);

    for (int i = 0; i < vec.size(); i++)
    {
        st.Push(vec[i]);
    }

    cout << st.isFull();

    cout << st.pop() << endl;

    cout << st.Peek() << endl;

    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;

    cout << st.Peek() << endl;

    cout << st.isFull();

    return 0;
}