#include <iostream>

using namespace std;

class coord{
    int x,y;
public:
    coord(){ x=0,y=0;};
    coord(int i,int j){ x=i,y=j;}
    void get_xy(int &i,int &j){ i=x,j=y;}
    coord operator--(){
        x--,y--;
    }
    coord operator--(int notused){
        x--,y--;
    }
};

int main()
{
    coord ob1(10,10), ob2(11,11);

    --ob1, ob2--;

    int i,j;

    ob1.get_xy(i,j);

    cout<< i << " " << j << endl;

    ob2.get_xy(i,j);

    cout<< i << " " << j << endl;

    return 0;
}
