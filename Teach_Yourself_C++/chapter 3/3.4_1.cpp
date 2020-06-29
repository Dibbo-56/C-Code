#include <iostream>

using namespace std;

class pr2;

class pr1{
    int printing;
public:
    pr1(){
        printing = 0;
    }

    void set_print(int status){
        printing = status;
    }

    friend bool inuse(pr1 p1, pr2 p2);
};

class pr2{
    int printing;
public:
    pr2(){
        printing = 0;
    }

    void set_print(int status){
        printing = status;
    }

    friend bool inuse(pr1 p1, pr2 p2);
};

bool inuse(pr1 p1, pr2 p2){
    if(p1.printing==1 || p2.printing){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    pr1 p1;
    pr2 p2;

    p1.set_print(1);
    p2.set_print(1);

    if(inuse(p1,p2)){
        cout<< "Print is used" << endl;
    }
    else{
        cout<< "Print is not used" << endl;
    }

    p1.set_print(0);
    p2.set_print(0);

    if(inuse(p1,p2)){
        cout<< "Print is used" << endl;
    }
    else{
        cout<< "Print is not used" << endl;
    }

    return 0;
}
