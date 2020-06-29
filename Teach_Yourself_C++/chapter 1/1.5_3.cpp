#include <bits/stdc++.h>
#define size 100

using namespace std;

class Queue{
    int q[size];
    int frnt=0,sz=0;
public:
    void push(int num)
    {
        if(frnt==sz){
            sz=0,frnt=0;
        }
        else if(sz==100){
            sz=0;
        }
        else{
            q[sz]=num;
            sz++;
        }
    }
    void pop()
    {
        if(frnt==100){
            frnt=0;
        }
        if(frnt==sz){
            printf("queue is empty\n");
        }
        else{
            frnt++;
        }
    }
    int front()
    {
        if(frnt==sz){
            printf("queue is empty\n");
        }
        else{
            return q[frnt];
        }
    }
    bool empty()
    {
        if(frnt==sz){
            return true;
        }
        else{
            return false;
        }
    }

};

int main()
{
    Queue q1,q2;

    for(int i=1;i<=100;i++){
        q1.push(i);
        q2.push(i*2);
    }
    q1.pop();
    q1.push(101);

    return 0;
}
