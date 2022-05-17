#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc;
    string s;

    in>>tc;

    while(tc--){
        in>>s;
        if(s.length()>3) printf("3\n");
        else if( ((s[0]=='t')&&(s[1]=='w') || (s[0]=='t')&&(s[2]=='o') || (s[1]=='w')&&(s[2]=='o')) ) printf("2\n");
        else printf("1\n");
    }

    return 0;
}
