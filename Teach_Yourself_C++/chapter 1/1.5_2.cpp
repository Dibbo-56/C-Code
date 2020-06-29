#include <bits/stdc++.h>

using namespace std;

class card{
    char title[50],author[50];
    int copies;
public:
    void store(char Title[],char Author[],int Copies)
    {
        strcpy(title,Title);
        strcpy(author,Author);
        copies=Copies;
    }
    void show()
    {
        printf("%s\n",title);
        printf("%s\n",author);
        printf("%d\n",copies);
    }
};

int main()
{
    card book1,book2;

    book1.store("Data_Science","Nelli",5);
    book2.store("Deep_Learning","Yoshua_Bengio",3);

    book1.show();
    book2.show();

    return 0;
}
