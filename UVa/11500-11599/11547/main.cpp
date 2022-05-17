#include <iostream>
#include <fstream>

using namespace std;

int autoans(int n){
    int rs = ((315*n+36962)/10)%10;
    return rs>0?rs:rs*(-1);
}

int main()
{
    ifstream in("in");

    int tc, n;

    in>>tc;

    while(tc--){
        in>>n;
        printf("%d\n", autoans(n));
    }
    return 0;
}


