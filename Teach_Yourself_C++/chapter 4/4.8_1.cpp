#include <iostream>
#include <cstdio>

using namespace std;

class array{
    int isize,jsize;
    int *p;
public:
    array(int i,int j){
        p = new int [i*j];
        isize=i,jsize=j;
    }

    ~array(){
        delete [] p;
    }

    int &put(int i,int j){
        return p[i*jsize+j];
    }

    int get(int i,int j){
        return p[i*jsize+j];
    }
};

int main()
{
    array a(2,3);

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            a.put(i,j) = i+j;
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<< a.get(i,j) << endl;
        }
    }



    return 0;
}
