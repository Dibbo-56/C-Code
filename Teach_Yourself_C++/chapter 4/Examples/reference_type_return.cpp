#include <iostream>

using namespace std;

int x;

int &f()
{
    return x;
}

int main()
{
    int *a;

    a = &f();

    cout<< a << endl;
    cout<< &x << endl;

    return 0;
}
