#include <iostream>

using namespace std;

inline int abs(int n)
{
    return n>=0 ? n : (-1)*n;
}

inline long abs(long n)
{
    return n>=0 ? n : (-1)*n;
}

inline double abs(double n)
{
    return n>=0 ? n : (-1)*n;
}

int main()
{
    cout<< abs(-10) << endl;
    cout<< abs(10) << endl;
    cout<< abs(-1.2) << endl;
    cout<< abs(1.1) << endl;
    cout<< abs(-10000002233) << endl;
    cout<< abs(10000002233) << endl;

    return 0;
}
