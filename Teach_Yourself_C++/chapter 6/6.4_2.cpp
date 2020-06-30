#include <iostream>

using namespace std;

class coord{
    int x,y;
public:
    coord(){ x=0,y=0;};
    coord(int i,int j){ x=i,y=j;}
    void get_xy(int &i,int &j){ i=x,j=y;}
    coord operator+(coord ob2){  /// binary
        coord temp;
        temp.x = x + ob2.x;
        temp.y = y + ob2.y;
        return temp;
    }
    coord operator+(){  /// unary
        if(x<1){ x=(-1)*x;}
        if(y<1){ y=(-1)*y;}
        return *this;
    }
};

int main()
{
    coord ob1(-10,10), ob2(11,11), ob3;

    ob3 = ob1 + ob2;
    ob1 = +ob1;

    int i,j;

    ob3.get_xy(i,j);

    cout<< i << " " << j << endl;

    ob1.get_xy(i,j);

    cout<< i << " " << j << endl;
    return 0;
}
