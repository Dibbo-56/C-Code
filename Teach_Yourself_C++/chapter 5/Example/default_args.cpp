#include <iostream>

using namespace std;

int func(int a=1,int b=1){
    return a*b;
}

int main()
{
    cout<< func() << endl;
    cout<< func(10) << endl;
    cout<< func(10,19) << endl;

    return 0;
}

/// once the first default argument is specified, all following parameters must have defaults as well.
