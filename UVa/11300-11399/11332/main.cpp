#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int n, rs;

    while(in>>n, n){
        rs=0;
        while(n>0){
            rs+=n%10;
            n/=10;
            if(((rs/10)>0) && (n==0)){
                n=rs;
                rs=0;
            }
        }
        printf("%d\n",rs);
    }

    return 0;
}
