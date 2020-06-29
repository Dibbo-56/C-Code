#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

void sleep(int n)
{
    for(int i=1;i<=n;i++){
        usleep(100000);
    }
}

void sleep(char *n)
{
    int t=atoi(n);

    for(int i=1;i<=5;i++){
        usleep(100000);
    }
}

int main()
{
    sleep('5');
    return 0;
}
