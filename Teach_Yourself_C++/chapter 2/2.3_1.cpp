#include<iostream>

using namespace std;

class area_cl{
public:
    double height;
    double weight;
};

class rectangle : public area_cl{
public:
    rectangle(double h,double w){
        height = h;
        weight = w;
    }

    double area(){
        return height*weight;
    }
};

class isosceles : public area_cl{
public:
    isosceles(double h,double w){
        height = h;
        weight = w;
    }

    double area(){
        return 0.5*height*weight;
    }
};


int main()
{
    rectangle rt(2.3,4.5);
    isosceles tr(4.5,5.1);

    cout<< "rectangle area " << rt.area() << endl;
    cout<< "isosceles triangle area " << tr.area() << endl;

   return 0;
}

