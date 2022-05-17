#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int t, m=0, d;
    string s;

    in>>t;
    while(t--){
        in>>s;
        if(s=="donate") {
            in>>d;
            m+=d;
        } else printf("%d\n",m);
    }

    return 0;
}
