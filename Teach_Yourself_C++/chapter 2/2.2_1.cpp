#include <iostream>
#include <cstdlib>

using namespace std;

class stack{
    char *s;
    int last,sz;
public:
    stack(int num){
        s = (char *)malloc(num);
        sz=num,last=0;
    }
    ~stack(){
        free(s);
    }
    void push(char ch){
        if(last==sz){
            cout<< "stack is full" << endl;
            return;
        }
        s[last]=ch;
        last++;
    }

    char pop(){
        if(last==0){
            cout<< "stack is empty" << endl;
            return 0;
        }
        last--;
        return s[last];

    }
};

int main()
{
    stack ob(5);

    for(int i=0;i<5;i++){
        ob.push('a'+i);
    }

    for(int i=0;i<5;i++){
        cout<< ob.pop() << endl;
    }
    return 0;
}
