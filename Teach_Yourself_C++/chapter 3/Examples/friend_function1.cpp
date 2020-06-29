#include <iostream>

using namespace std;

class truck; /// forward declaration

class car{
    int passengers;
    int speed;
public:
    car(int p,int s){
        passengers=p,speed=s;
    }
    int cmp(truck t);
};

class truck{
    int weight;
    int speed;
public:
    truck(int w,int s){
        weight=w,speed=s;
    }
    friend int car::cmp(truck t);
};

int car::cmp(truck t){
    return speed-t.speed;
}

int main()
{
    int t;

    car c1(6,55), c2(2,100);
    truck t1(1000,56),t2(100,123);

    t = c1.cmp(t1);

    if(t>0){
        cout<< "truck is faster" << endl;
    }
    else if(t==0){
        cout<< "speed is equal" << endl;
    }
    else{
        cout<< "car is slow" << endl;
    }

    return 0;
}
