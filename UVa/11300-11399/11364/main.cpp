#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");


    int tc, n, s, l, x;

    in>>tc;

    while(tc--){
        in>>n;
        s=99;
        l=0;
        while(n--){
            in>>x;
            if(x<s) s=x;
            if(x>l) l=x;
        }
        printf("%d\n", (l-s)*2);
    }


    return 0;
}
