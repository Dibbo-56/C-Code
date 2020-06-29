#include <iostream>

using namespace std;

class myclass{
    int a;
public:
    myclass(int n){
        a=n;
        cout<< "Constructing " << a << endl;
    }
    ~myclass(){
        cout<< "destructing " << a << endl;
    }
    void set(int n){
        a=n;
    }
};

myclass func(myclass ob){
    ob.set(2);
    return ob;
}

int main()
{
    myclass ob(1);

    func(ob);

    return 0;
}

