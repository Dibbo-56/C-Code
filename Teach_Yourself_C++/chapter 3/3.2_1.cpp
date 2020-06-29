#include <iostream>
#define SIZE 10

using namespace std;

class stack{
    char stck[SIZE];
    int tos;
public:
    stack(){
        cout<< "construcuting " << endl;
        tos=0;
    }

    void push(char ch){
        if(tos==SIZE){
            cout<< "Stack is full" << endl;
            return;
        }
        stck[tos] = ch;
        tos++;
    }

    char pop(){
        if(tos==0){
            cout<< "stack is empty" << endl;
            return 0;
        }
        tos--;
        return stck[tos];
    }

    void showstack(stack stk){
        char c=stk.pop();
        while(c!=0){
            cout<< c << endl;
            c=stk.pop();
        }
    }
};

int main()
{
    stack ob;

    ob.push('a');
    ob.push('b');
    ob.push('c');

    ob.showstack(ob);

    return 0;
}
