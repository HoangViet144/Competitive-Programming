#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
class Queue{
    stack <int>s1,s2;
public:
    void enqueue(int x)
    {
        /*while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }*/
        s1.push(x);
    }
    int dequeue()
    {
        /*if(s1.empty())
        {
            return INT8_MIN;
        }
        int x = s1.top();
        s1.pop();
        return x;*/
        if(s1.empty() && s2.empty())return INT8_MAX;
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x= s2.top();
        s2.pop();
        return x;
    }
    void frontQueue()
    {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout<<s2.top()<<endl;
    }
    void printQueue()
    {
        cout<<"Print: ";
        while(!s1.empty())
        {
            cout<<s1.top()<<" ";
            s1.pop();
        }
        cout<<endl;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Queue *p= new Queue;
    int q; cin>>q;
    while(q--)
    {
        int type;
        cin>>type;
        switch(type)
        {
        case 1:
            int x; cin>>x;
            p->enqueue(x);
            break;
        case 2:
            p->dequeue();
            break;
        case 3:
            p->frontQueue();
            break;
        }
    }
    return 0;
}
