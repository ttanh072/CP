#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int n, m, c, seq = 1;

    while(in>>n>>m>>c, n&&m&&c){
        int total = 0, ma = -1, swit;
        int device[n], sw[n];
        bool blown=false;

        for(int i=0;i<n;i++) {
            in>>device[i];
            sw[i]=1;
        }

        while(m--){
            in>>swit;
            if(!blown){
                swit--;
                if(sw[swit]){
                    sw[swit]=0;
                    total += device[swit];
                } else {
                    sw[swit]=1;
                    total -= device[swit];
                }

                if(total>c) blown=true;
                else if(total>ma) ma=total;
            }
        }

        printf("Sequence %d\n", seq++);
        if(blown) printf("Fuse was blown.\n\n");
        else {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n",ma);
        }
    }

    return 0;
}
