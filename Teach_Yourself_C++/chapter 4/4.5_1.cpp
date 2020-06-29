#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    char *p;

    p = new char [100];             /// p=(char*)malloc(5);

    strcpy(p,"This is test");

    cout<< p << endl;

    delete [] p;

    return 0;
}
