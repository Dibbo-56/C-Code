#include <iostream>

using namespace std;

class operator_overload{
    int x,y;
public:
    operator_overload(int i,int j) { x=i,y=j; }
    operator_overload() { x=0,y=0; }
    void get_xy(int &i,int &j) { i=x,j=y; }
    int operator==(operator_overload ob){
        return x==ob.x && y==ob.y;
    }
    int operator&&(operator_overload ob){
        return (x&&ob.x) && (y&&ob.y);
    }
};

int main()
{
    operator_overload ob1(10,10), ob2(10,10), ob3(0,14);

    if(ob1==ob2){
        cout<< "equal" << endl;
    }
    else{
        cout<< "not equal" << endl;
    }

    if(ob1&&ob2){
        cout<< "True" << endl;
    }
    else{
        cout<< "False" << endl;
    }

    return 0;
}
