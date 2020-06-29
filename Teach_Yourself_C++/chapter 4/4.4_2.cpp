#include <iostream>
#include <cstring>

using namespace std;

class info{
    char name[20],tele[15];
public:
    void set_nl(char nam[], char tel[]){
        strcpy(name,nam);
        strcpy(tele,tel);
    }
    void show(){
        cout<< name << " " << tele << endl;
    }
};

int main()
{
    info *p;

    p = new info;
    p->set_nl("Narwal","01234567789");
    p->show();

    delete p;

    return 0;
}
