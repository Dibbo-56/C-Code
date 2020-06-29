#include <iostream>

using namespace std;

int dif(int a,int b){
    return a-b;
}

float dif(float a,float b){
    return a-b;
}

int main()
{
    int (*p1)(int,int);
    float (*p2)(float,float);

    p1 = dif;
    p2 = dif;

    cout<< p1(10,5) << endl;
    cout<< p2(10.34,5.223) << endl;

    return 0;
}
