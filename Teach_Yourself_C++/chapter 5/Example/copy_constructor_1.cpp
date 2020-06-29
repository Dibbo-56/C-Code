#include <iostream>

using namespace std;

class myclass{
public:
    int *a;
    myclass(int num){
        a = new int;
        *a = num;
        cout<< "constructing " << *a << endl;
    }

    ~myclass(){
        cout<< "destructing " << *a << endl;
        delete a;
    }

    myclass(const myclass &ob){
        a = new int;
        *a = *ob.a;
        cout<< "from copy " << *a << endl;
    }

    int get(){
        return *a;
    }
};

myclass func(myclass ob){
    myclass ob1 = ob;
    return ob1;
}


int main()
{
    myclass ob(5);

    ob = func(ob);
    cout<< ob.get() << endl;

    return 0;
}
