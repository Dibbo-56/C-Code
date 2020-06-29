#include <iostream>

using namespace std;

int main()
{
    int *n;
    long *m;
    float *d;

    n = new int;
    m = new long;
    d = new float;

    *n=1,*m=100000000,*d=1.2;

    cout<< *n << " " << *m << " " << *d << endl;

    delete n;
    delete m;
    delete d;

    return 0;
}
