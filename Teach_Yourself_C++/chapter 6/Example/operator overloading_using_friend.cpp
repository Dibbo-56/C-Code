#include<iostream>

using namespace std;

class coord{
    int x,y;
public:
    coord() { x=0,y=0; }
    coord(int i,int j) { x=i,y=j; }
    void get_xy(int &i,int &j) { i=x,j=y; }
    friend coord operator+(coord ob1, coord ob2);
};

coord operator+(coord ob1, coord ob2){
    coord temp;

    temp.x = ob1.x + ob2.x;
    temp.y = ob1.y + ob2.y;

    return temp;
}

int main()
{
    coord ob1(10,10), ob2(20,12), ob3;

    int x,y;

    ob3 = ob1 + ob2;

    ob3.get_xy(x,y);

    cout<< x << " " << y << endl;

    return 0;
}
