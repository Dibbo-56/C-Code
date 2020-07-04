#include<iostream>

using namespace std;

class coord{
    int x,y;
public:
    coord() { x=0,y=0; }
    coord(int i,int j) { x=i,y=j; }
    void get_xy(int &i,int &j) { i=x,j=y; }
    friend coord operator+(coord ob1, int i);
    friend coord operator+(int i, coord ob1);
};

coord operator+(coord ob1, int i){
    coord temp;

    temp.x = ob1.x + i;
    temp.y = ob1.y + i;

    return temp;
}

coord operator+(int i, coord ob1){
    coord temp;

    temp.x = ob1.x + i;
    temp.y = ob1.y + i;

    return temp;
}

int main()
{
    coord ob1(10,10), ob2, ob3;

    int x,y;

    ob3 = ob1 + 10;

    ob3.get_xy(x,y);

    cout<< x << " " << y << endl;

    ob2 = 10 + ob1;

    ob2.get_xy(x,y);

    cout<< x << " " << y << endl;

    return 0;
}

