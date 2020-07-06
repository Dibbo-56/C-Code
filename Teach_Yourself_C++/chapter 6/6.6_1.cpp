#include <iostream>

using namespace std;

class dynarray{
    int *p;
    int size;
public:
    dynarray(int s){
        p = new int [s];
        size = s;
    }

    int &put(int i){
        return *(p+i);
    }

    int get(int i){
        return *(p+i);
    }

    dynarray operator=(dynarray &ob){
        if(size < ob.size){
            delete [] p;
            p = new int [ob.size];
            size = ob.size;
        }

        for(int i=0;i<ob.size;i++){
            *(p+i) = ob.p[i];
        }
        return *this;
    }
};

int main()
{
    dynarray ob(5),ob1(7),ob2(3);

    ob.put(0) = 10;
    ob.put(1) = 11;
    ob.put(2) = 12;
    ob.put(3) = 13;
    ob.put(4) = 14;

    cout<< ob.get(1) << endl;
    cout<< ob.get(2) << endl;
    cout<< endl;

    ob1 = ob;
    ob2 = ob;

    cout<< "ob1 " << endl;
    for(int i=0;i<5;i++){
        cout<< ob1.get(i) << endl;
    }
    cout<< endl;

    cout<< "ob2 " << endl;
    for(int i=0;i<5;i++){
        cout<< ob2.get(i) << endl;
    }

    return 0;
}
