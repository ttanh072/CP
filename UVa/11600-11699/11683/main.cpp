#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int a;

    while(in>>a,a){
        int c, step=0, ta=a;
        in>>c;
        int rs[c];
        in>>rs[0];
        step+=a-rs[0];

        for(int i=1;i<c;i++) {
            in>>rs[i];
            if(rs[i]!=a){
                ta = rs[i-1] - rs[i];
                if(ta>0) step+=ta;
            }
        }
        cout<<step<<endl;
    }

    return 0;
}
