#include <iostream>

using namespace std;

class who{
    char ch;
public:
    who(char c){
        ch=c;
        cout<< "Constructing who " << c << endl;
    }
    ~who(){
        cout<< "destructing who " << ch << endl;
    }
};

who make_who(){
    who ob('b');
    return ob;
}

int main()
{
    who ob('a');

    make_who();


    return 0;
}
