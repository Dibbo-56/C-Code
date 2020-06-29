#include <iostream>

using namespace std;

class crood{
    int x,y;
public:
    crood() { x=0,y=0; }
    crood(int i,int j) { x=i,y=j; }

    void get_xy(int &i,int &j) { i=x,j=y; }

    crood operator+(crood ob2){
        crood temp;
        temp.x = x + ob2.x;
        temp.y = y + ob2.y;
        return temp;
    }

    crood operator+(int i){
        crood temp;
        temp.x = x + i;
        temp.y = y + i;
        return temp;
    }
};

int main()
{
    crood o1(10, 20), o2(5, 3), o3(5,4), o4;

    o4 = o1 + o2 + o3;

    int x,y;

    o4.get_xy(x, y);  /// (o1 + o2 + o3).get_xy(x, y) also valid

    cout<< "(o1 + o2) X:" << x << " Y:" << y << endl;

    o4 = o4 + 100;

    o4.get_xy(x, y);

    cout<< "(o4 + 100) X:" << x << " Y:" << y << endl;

    return 0;
}
