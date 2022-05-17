#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc;

    in>>tc;

    for(int i=1;i<=tc;i++){
        int n, c, b;
        int hj=0, lj=0;
        in>>n;
        in>>b;
        n--;
        while(n--){
            in>>c;
            if(c>b) hj++;
            else if(c<b) lj++;
            b=c;
        }

        printf("Case %d: %d %d\n", i, hj, lj);
    }


    return 0;
}
