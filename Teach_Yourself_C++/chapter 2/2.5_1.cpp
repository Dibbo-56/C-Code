#include <iostream>
#define size 100

using namespace std;

struct stack{
    stack(){
        cout<< "construcuting" << endl;
        tail=0;
    }
    void push(char ch){
        if(tail==size){
            cout<< "stack is full" << endl;
            return;
        }
        stk[tail]=ch;
        tail++;
    }

    char pop(){
        if(tail==0){
            cout<< "stack is empty" << endl;
            return 0;
        }
        tail--;
        return stk[tail];
    }

private:
    char stk[size];
    int tail;
};

int main()
{
    stack s1;

    for(int i=0;i<10;i++){
        s1.push('a'+i);
    }

    for(int i=0;i<10;i++){
        cout<< s1.pop() << endl;
    }

    return 0;
}
