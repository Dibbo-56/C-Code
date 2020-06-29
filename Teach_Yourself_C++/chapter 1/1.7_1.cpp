#include <iostream>
#include <cmath>

using namespace std;

int sroot(int n)
{
    return sqrt(n);
}

long sroot(long n)
{
    return sqrt(n);
}

double sroot(double n)
{
    return sqrt(n);
}

int main()
{
    cout<< sroot(25) << endl;
    cout<< sroot(34.45) << endl;
    cout<< sroot(1000000000) << endl;

    return 0;
}
