#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int i=1;
    string s;

    while((getline(in,s)),(s!="*")){
        printf("Case %d: ",i++);
        if(s=="Hajj") printf("Hajj-e-Akbar\n");
        else printf("Hajj-e-Asghar\n");
    }

    return 0;
}
