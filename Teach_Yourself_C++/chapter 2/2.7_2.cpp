#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

class strtype{
    char *p;
    int len;
public:
    strtype(char *ptr){
        len=strlen(ptr);
        p = (char*)maclloc(len+1);
        if(!p){
            cout<< "Allocation error" << endl;
            exit(1);
        }
        strcpy(p,ptr);
    }

    ~strtype(){ cout << "Freeing" << endl; free(p);}

     void show(){
        cout<< p << " length " << len << endl;
     }
};

int main()
{
    strtype s1("This is a test."), s2("masalei ni");
    s1.show();
    s2.show();

    return 0;
}
