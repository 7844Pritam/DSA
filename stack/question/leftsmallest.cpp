#include <bits/stdc++.h>
using namespace std;

vector<int> temp;

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

    int size()
    {
        return size;
    }
};

vector<int> leftsmallerElement(vector<int> vec)
{
    Stack st(vec.size());

    for (int i = 0; i < vec.size(); i++)
    {
        if (st.isFull() == false)
        {
            temp.push_back(-1);
        }
        else
        {
            while (st.isFull() == false && vec[i] >= st.Peek())
            {
                st.pop();
            }

            if (st.isFull() = false)
            {
                
            }
        }

        st.Push(vec[i]);
    }

    return temp;
}

int main()
{

    vector<int> vec = {1, 2, 3, 4, 5};

    return 0;
}