#include <iostream>

using namespace std;

class coord{
    int x,y;
public:
    coord(int i,int j) { x=i,y=j; }
    coord() { x=0,y=0; }
    void get_xy(int &i,int &j) { i=x,j=y; }
    int operator>(coord ob){
        return x>ob.x && y>ob.y;
    }
    int operator<(coord ob){
        return x<ob.x && y<ob.y;
    }
};

int main()
{
    coord ob1(10,10), ob2(5,4), ob3(0,1);

    if(ob1>ob2){
        cout<< "ob1 greater than ob2" << endl;
    }
    else{
        cout<< "ob1 smaller than ob2" << endl;
    }

    if(ob3<ob2){
        cout<< "ob3 smaller than ob2" << endl;
    }
    else{
        cout<< "ob3 greater than ob2" << endl;
    }

    return 0;
}

