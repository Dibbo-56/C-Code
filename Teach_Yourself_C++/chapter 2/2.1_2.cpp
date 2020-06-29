#include <iostream>
#include <ctime>

using namespace std;

class stopwatch{
    clock_t t1;
    double elapsed_time;
public:
    stopwatch(){
        cout<< "Constructing" << endl;
        elapsed_time = 0;
    }

    ~stopwatch(){
        cout<< "Destructing" << endl;
    }

    void start(){
        t1 = clock();
    }

    void show(){
        clock_t t2 = clock();
        elapsed_time = (double)t2-(double)t1 / CLOCKS_PER_SEC;
        cout<< elapsed_time << endl;
    }

    void stop(){
        clock_t t2 = clock();
    }
};

int main()
{
    stopwatch ob;

    ob.start();
    ob.show();
    ob.stop();


    return 0;
}
