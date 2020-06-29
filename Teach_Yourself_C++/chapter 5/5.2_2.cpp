#include <iostream>
#include <cstdlib>

using namespace std;

class myclass{
    int *p;
public:
    myclass(int i){
        p = new int;
        *p=i;
    }

    ~myclass(){
        delete p;
    }

    friend int getval(myclass o){
        return *o.p;
    }

};

int main()
{
    myclass a(1),b(2);

    cout<< getval(a) << " " << getval(b) << endl;
    /// We need to use copy constructor cause the memory of a and b is freed in getval.
    return 0;
}
