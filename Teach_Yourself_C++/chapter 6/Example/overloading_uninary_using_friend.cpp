#include <iostream>

using namespace std;

class coord{
    int x,y;
public:
    coord() { x=0,y=0; }
    coord(int i,int j) { x=i,y=j;};
    void get_xy(int &i, int &j) { i=x,j=y; }
    friend coord operator++(coord &ob);
};

coord operator++(coord &ob){
    ob.x++;
    ob.y++;
    return ob; /// If I comment out it, it works properly
}

int main()
{
    coord ob(11,12);

    ++ob;

    int i,j;

    ob.get_xy(i,j);

    cout<< i << " " << j << endl;

    return 0;
}
