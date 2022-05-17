#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc;
    in>>tc;

    while(tc--){
        int n, rs=0;
        in>>n;
        int mv[n];
        string s;

        for(int i=0;i<n;i++){
            in>>s;
            if(s=="LEFT"){
                mv[i]=-1;
            } else if(s=="RIGHT"){
                mv[i]=1;
            } else{
                int sa;
                in>>s>>sa;
                mv[i]=mv[sa-1];
            }
        }

        for(int i=0;i<n;i++){
            rs+=mv[i];
        }

        printf("%d\n",rs);

    }

    return 0;
}
