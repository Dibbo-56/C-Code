#include <iostream>

using namespace std;

union swapbytes
{
    short a;
    swapbytes(short x){
        a=x;
    }
    char ch[2];
    void swap(){
        char tm;
        tm = ch[0];
        ch[0] = ch[1];
        ch[1] = tm;
    }
};

int main()
{
    swapbytes ob(1);
    ob.swap();
    cout<< ob.a << endl;

    return 0;
}
