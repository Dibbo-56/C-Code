#include <iostream>

using namespace std;

class box{
    double v;
public:
    box(double w,double h,double l){
        v = w*h*l;
    }

    void vol(){
        cout<< v << endl;
    }
};

int main()
{
    box ob(1.2,2.4,4.5);

    ob.vol();

    return 0;
}
