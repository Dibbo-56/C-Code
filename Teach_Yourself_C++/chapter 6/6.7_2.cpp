#include <iostream>
#include <cstdlib>

using namespace std;

class dynarray{
    int *p;
    int size;
public:
    dynarray(int s){
        p = new int [s];
        size = s;
    }

    dynarray &operator=(dynarray &ob){
        for(int i=0;i<size;i++){ p[i] = ob.p[i]; }
        return *this;
    }

    int &operator[](int i){
        return p[i];
    }

};


int main()
{
    int i;

    dynarray ob1(10), ob2(10);

    ob1[0] = 123;
    ob1[9] = 321;

    cout<< ob1[0] << ob1[9] << endl;

    i = ob1[0];

    cout<< i ;

    i = ob1[9];

    cout<< i ;

    return 0;
}
