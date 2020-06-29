#include <iostream>

using namespace std;

class samp{
    int a;
public:
    samp(int n){
        a=n;
    }
    int get_a(){
        return a;
    }

};

int main()
{
    samp ob[4][2] = {1,2,3,4,5,6,7,8};
    samp *p;
    p = (samp*)ob;

    for(int i=0;i<8;i++){
        cout<< p->get_a() << endl;
        p++;
    }

    return 0;
}
