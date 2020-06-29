#include <iostream>

using namespace std;

class base{
    int a;
public:
    void load_a(int n){
        a=n;
    }
    int get_a(){
        return a;
    }
};

class derived : public base{
    int b;
public:
    void load_b(int n){
        b=n;
    }
    int get_b(){
        return b;
    }
};


int main()
{
    derived ob1,ob2;

    ob1.load_a(5);
    ob1.load_b(10);

    ob2 = ob1; /// the data for base will be assigned in ob2 from ob1.

    cout<< ob2.get_a() << endl;
    cout<< ob2.get_b() << endl;

    return 0;
}
