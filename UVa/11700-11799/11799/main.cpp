#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc;

    in>>tc;

    for(int i=1 ;i<=tc; i++){
        int n, m=0;
        in>>n;
        while(n--){
            int c;
            in>>c;
            if(c>m) m=c;
        }

        printf("Case %d: %d\n",i,m);
    }

    return 0;
}
