#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

class strtype{
    char *p;
    int len;
public:
    strtype(char *s){
        int l;
        l = strlen(s)+1;
        p = new char [l];
        if(!p){
            cout<< "Alloacation error" << endl;
            exit(1);
        }
        len = l;
        strcpy(p, s);
    }

    ~strtype(){
        cout<< "Freeing  " << n p << endl;
        delete [] p;
    }

    char *get() { return p; }

    strtype &operator=(strtype &ob){
        if(len < ob.len){
            delete [] p;
            p = new char [ob.len];
            if(!p){
                cout<< "Alloacation error" << endl;
                exit(1);
            }
        }
        len = ob.len;
        strcpy(p, ob.p);
        return *this;
    }
    char &operator[](int i){ return p[i]; }
};

int main()
{
    strtype a("Hello"), b("There");

    cout<< a.get() << endl;
    cout<< b.get() << endl;

    cout<< a[0] << a[2] << a[3] << endl;
    cout<< b[0] << b[2] << b[3] << endl;

    a[0] = 'A';
    a[4] = 'Z';

    cout << a.get() << endl;
    return 0;
}

