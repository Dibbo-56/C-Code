#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class t_and_d{
    char* dt;
public:
    t_and_d(time_t t){
        dt = ctime(&t);
    }

    void show(){
        cout<< "Current time and date is " << dt ;
    }
};

int main()
{
    time_t t = time(0);

    t_and_d ob(t);

    ob.show();

    return 0;
}
