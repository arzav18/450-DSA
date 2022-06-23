#include<bits/stdc++.h>
using namespace std;

#define n 100

class Queue
{
    int *arr;
    int front;
    int back;

public:
    Queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enqueue(int x)
    {
        if(back==n-1)
        {
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1)
            front++;
    }

    void dequeue()
    {
        if(front==-1 || front>back)
        {
            cout<<"no elements to dequeue"<<endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"no elements in queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if(front==-1 || front>back)
        {
            cout<<"empty"<<endl;
            return -1;
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    return 0;
}
