#include <iostream>
#include <fstream>

using namespace std;

int mile(int n){
    int m=0;
    m+=(n/30)*10;
    n%=30;
    if(n>=0) m+=10;
    return m;
}

int juice(int n){
    int j=0;
    j+=(n/60)*15;
    n%=60;
    if(n>=0) j+=15;
    return j;
}

int main()
{
    ifstream in("in");

    int tc;

    in>>tc;

    for(int i=1; i<=tc; i++){
        int n, m=0, j=0;
        in>>n;
        while(n--){
            int t;
            in>>t;
            m+=mile(t);
            j+=juice(t);
        }

        if(m<j) printf("Case %d: Mile %d\n",i,m);
        else if(m>j) printf("Case %d: Juice %d\n",i,j);
        else printf("Case %d: Mile Juice %d\n",i,m);
    }

    return 0;
}
