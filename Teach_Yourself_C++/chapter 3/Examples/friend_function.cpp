#include <iostream>

using namespace std;

class myclass2; /// This is called forward declaration

class myclass1{
    int a;
public:
    myclass1(int n){
        a=n;
    }
    friend int cmp(myclass1 ob1,myclass2 ob2);
};

class myclass2{
    int a;
public:
    myclass2(int n){
        a=n;
    }
    friend int cmp(myclass1 ob1,myclass2 ob2);
};

int cmp(myclass1 ob1,myclass2 ob2){
    return ob1.a-ob2.a;
}

int main()
{
    myclass1 ob1(5);
    myclass2 ob2(10);

    if(cmp(ob1,ob2)==0){
        cout<< "equal" << endl;
    }
    else if(cmp(ob1,ob2)>0){
        cout<< "ob1 is large" << endl;
    }
    else{
        cout<< "ob2 is large" << endl;
    }
    return 0;
}
