#include <iostream>

using namespace std;

class myclass{
    int a,b;
public:
    void set_ab(int x,int y){
        a=x,b=y;
    }
    ~myclass(){
        cout<< "EndGame" << endl;
    }
};

int main()
{
    myclass *p;

    p = new myclass [5];

    for(int i=0;i<5;i++){
        p[i].set_ab(i,i*i);
    }

    delete [] p;
    return 0;
}

