#include <iostream>
#include <fstream>

using namespace std;

bool way(char c, string s){
    if(c=='x' && s[0]=='-') return true;
    if(c=='y' && s[0]=='+' && s[1]=='y') return true;
    if(c=='z' && s[0]=='+' && s[1]=='z') return true;
    return false;
}

int main()
{
    ifstream in("in");

    int l;

    while(in>>l,l){
        string s;
        int ad=1;
        char c='x';
        for(int i=0;i<l-1;i++){
            in>>s;
            if(s!="No"){
                if(way(c,s)) ad=-ad;

                if(c=='x') c=s[1];
                else if(c=='y' && s[1]=='y') c='x';
                else if(c=='z' && s[1]=='z') c='x';
            }
        }
        printf("%c%c\n", ad==1?'+':'-',c);
    }

    return 0;
}
