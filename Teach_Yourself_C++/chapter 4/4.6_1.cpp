#include <iostream>
#include <cstdlib>

using namespace std;

void neg1(int *p){
    *p=(-1)*(*p);
}

void neg2(int &p){
    p=(-1)*p;
}

int main()
{
    int a=-5,b=5;

    neg1(&a);
    neg2(b);

    cout<< a << endl;
    cout<< b << endl;
    return 0;
}
