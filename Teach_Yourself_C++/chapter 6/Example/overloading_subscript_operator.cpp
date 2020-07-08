#include <iostream>

using namespace std;

const int size = 5;

class arraytype {
    int a[size];
public:
    arraytype(){
        for(int i=0;i<5;i++){ a[i]=i; }
    }
    int operator[](int i) { return a[i]; }
};

int main()
{
    arraytype ob;
    int i;

    for(int i=0;i<5;i++){
        cout<< ob[i] << endl;
    }


    return 0;
}
