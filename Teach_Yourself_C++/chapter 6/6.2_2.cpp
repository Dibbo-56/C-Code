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

    crood operator-(crood ob2){
        crood temp;
        temp.x = x - ob2.x;
        temp.y = y - ob2.y;
        return temp;
    }

    crood operator/(crood ob2){
        crood temp;
        temp.x = x / ob2.x;
        temp.y = y / ob2.y;
        return temp;
    }

    crood operator*(crood ob2){
        crood temp;
        temp.x = x * ob2.x;
        temp.y = y * ob2.y;
        return temp;
    }

    crood operator=(crood ob2){
        x = ob2.x;
        y = ob2.y;
        return *this;
    }
};

int main()
{
    crood o1(10, 20), o2(5, 3), o3(5,4), o4;

    int x,y;

    o4 = o1 + o2 + o3;
    o4.get_xy(x, y);
    cout<< "+ overloading  X: "<< x << " Y: " << y << endl;

    o4 = o1 - o2 - o3;
    o4.get_xy(x, y);
    cout<< "- overloading  X: "<< x << " Y: " << y << endl;

    o4 = o1 / o2 / o3;
    o4.get_xy(x, y);
    cout<< "/ overloading  X: "<< x << " Y: " << y << endl;

    o4 = o1 * o2 * o3;
    o4.get_xy(x, y);
    cout<< "* overloading  X: "<< x << " Y: " << y << endl;

    o4 = o3;
    o4.get_xy(x, y);
    cout<< "= overloading  X: "<< x << " Y: " << y << endl;

    return 0;
}
