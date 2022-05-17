#include <iostream>
#include <fstream>

using namespace std;

char getRS(string s){
    int l=s.length()-1;
    if(s=="1"||s=="4"||s=="78") return '+';
    if(s[l-1]=='3'&&s[l]=='5') return '-';
    if(s[0]=='9'&&s[l]=='4') return '*';
    return '?';
}

int main()
{
    ifstream in("in");

    int tc;
    string s;
    in>>tc;

    while(tc--){
        in>>s;
        printf("%c\n", getRS(s));
    }

    return 0;
}
