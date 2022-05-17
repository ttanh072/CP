#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int B, N;

    while(in>>B>>N, (B||N)){
        bool bailout = false;
        int R[B];
        for(int i=0;i<B;i++){
            in>>R[i];
        }

        while(N--){
            int D,C,V;
            in>>D>>C>>V;
            R[D-1]-=V;
            R[C-1]+=V;
        }

        for(int i=0;i<B;i++){
            if(R[i]<0) {
                bailout = true;
                break;
            }
        }

        if(bailout) printf("N\n");
        else printf("S\n");
    }

    return 0;
}
