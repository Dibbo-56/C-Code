#include <iostream>
#include <cstdlib>

using  namespace std;

long mystrtol(const char *s, char **end, int base=10){
    return strtol(s,end,base);
}

int main()
{
    long x ;
    char *s="123456789",*p;
    x = mystrtol(s,&p,10);
    cout<< x << endl;
    return 0;
}
