#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc, l, w, h, i=1;

    in>>tc;

    while(tc--){
        in>>l>>w>>h;
        printf("Case %d: ", i++);
        if(l>20 || w>20 || h>20) printf("bad\n");
        else printf("good\n");
    }

    return 0;
}
