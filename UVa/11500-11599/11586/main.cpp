#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc;
    in>>tc;

    string s;
    getline(in,s);
    while(tc--){
        int m=0, f=0, rm=0, rf=0, it=0;
        getline(in,s);
        for(int i=0,l=s.length();i<l;i++){
            if(s[i] != ' '){
                if(s[i]=='M') m++;
                else f++;
                if(s[i+1]=='M') rm++;
                else rf++;
                i++;
                it++;
            }
        }

        if((m==rf || f==rm)&&it>1) printf("LOOP\n");
        else printf("NO LOOP\n");
    }

    return 0;
}
