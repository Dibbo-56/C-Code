#include <iostream>

using namespace std;

char min(char a,char b)
{
    cout<< "char min ";
    if(a>b){
        return b;
    }
    else if(b>a){
        return a;
    }
}

int min(int a,int b)
{
    cout<< "int min ";
    if(a>b){
        return b;
    }
    else if(b>a){
        return a;
    }
}

double min(double a,double b)
{
    cout<< "double min ";
    if(a>b){
        return b;
    }
    else if(b>a){
        return a;
    }
}

int main()
{
    cout<< min('a','b') << endl;
    cout<< min(5,6) << endl;
    cout<< min(5.55,5.54) << endl;

    return 0;
}
