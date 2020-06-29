#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype{
    char *p;
public:
    strtype(char *s){
        int l;
        l = strlen(s)+1;
        p = new char [l];
        strcpy(p,s);
    }
    strtype(const strtype &ob){
        int l=strlen(ob.p);
        p = new char [l];
        strcpy(p,ob.p);
    }
    ~strtype(){
        delete [] p;
    }
    char *get(){
        return p;
    }
};

void show(strtype x){
    char *s;
    s = x.get();
    cout<< s << endl;
}

int main()
{
    strtype a("Hello"),b("Ojana");
    show(a);
    show(b);
    cout<< a.get() << endl;
    cout<< b.get() << endl;
    return 0;
}

