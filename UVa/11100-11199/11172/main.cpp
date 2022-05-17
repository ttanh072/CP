#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc, a, b;

    in>>tc;

    while(tc--){
        in>>a>>b;
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else printf("=\n");
    }


    return 0;
}
