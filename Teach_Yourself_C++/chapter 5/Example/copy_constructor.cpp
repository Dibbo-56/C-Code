#include <iostream>
#include <cstdlib>

using namespace std;

class array{
    int *p;
    int size;
public:
    array(int sz){
        p = new int [sz];
        size = sz;
    }

    ~array(){
        delete [] p;
    }

    array(const array &a){
        p = new int [a.size];
        size = a.size;
        for(int i=0;i<a.size;i++){
            p[i] = a.p[i];
        }
    }

    void put(int i,int j){
        p[i] = j;
    }

    int get(int i){
        return p[i];
    }
};

int main()
{
    array num(10);

    for(int i=0;i<10;i++){
        num.put(i,i*i);
    }

    for(int i=0;i<10;i++){
        cout<< num.get(i) <<  endl;
    }

    array x = num;

    for(int i=0;i<10;i++){
        cout<< x.get(i) <<  endl;
    }

    return 0;
}
