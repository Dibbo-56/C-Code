#include <iostream>

using namespace std;

class coord{
    int x,y;
public:
    coord() { x=0,y=0; }
    coord(int i,int j) { x=i,y=j;};
    void get_xy(int &i, int &j) { i=x,j=y; }
    friend coord operator*(coord ob1, int i);
    friend coord operator*(int i, coord ob1);
};

coord operator*(coord ob1, int i){
    coord temp;

    temp.x = ob1.x * i;
    temp.y = ob1.y * i;

    return temp;
}

coord operator*(int i, coord ob1){
    coord temp;

    temp.x = ob1.x * i;
    temp.y = ob1.y * i;

    return temp;
}

int main()
{
    coord ob1(11,12),ob;

    ob = ob1 * 2;

    int i,j;

    ob.get_xy(i,j);

    cout<< i << " " << j << endl;

    ob = 3 * ob1;

    ob.get_xy(i,j);

    cout<< i << " " << j << endl;

    return 0;
}


