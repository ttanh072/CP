#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int n, b, h, w, rs;

    while(in>>n>>b>>h>>w){
        rs=b+1;
        while(h--){
            int p;
            in>>p;
            for(int i=0;i<w;i++){
                int a;
                in>>a;
                if(a>=n && p*n<=rs){
                    rs = p*n;
                }
            }
        }
        if(rs<=b) printf("%d\n", rs);
        else printf("stay home\n");
    }

    return 0;
}
