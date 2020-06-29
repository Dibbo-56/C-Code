#include <iostream>
#include <cstring>

using namespace std;

class strtype{
    char *p;
    int len;
public:
    strtype(){
        p = new char [255];
        *p = '\0';
        len = 255;
    }

    strtype(char *c,int byte){
        p = new char [byte];
        len = byte;
        strcpy(p,c);
    }

    char *getstring(){
        return p;
    }
    int getlength(){
        return len;
    }

};

int main()
{
    strtype ob1,ob2("Hello World",255);

    cout<< ob2.getstring() << endl;
    cout<< ob2.getlength() << endl;

    return 0;
}
