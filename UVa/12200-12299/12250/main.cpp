#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    string s;
    int i=1;

    while(getline(in,s),(s!="#")){
        printf("Case %d: ",i++);
        if(s=="HELLO") printf("ENGLISH\n");
        else if(s=="HOLA") printf("SPANISH\n");
        else if(s=="HALLO") printf("GERMAN\n");
        else if(s=="BONJOUR") printf("FRENCH\n");
        else if(s=="CIAO") printf("ITALIAN\n");
        else if(s=="ZDRAVSTVUJTE") printf("RUSSIAN\n");
        else printf("UNKNOWN\n");

    }

    return 0;
}
