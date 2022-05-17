#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc;

    in>>tc;

    for(int ca=1; ca<=tc; ca++){
        string url[10];
        int m[10], top=0;

        for(int i=0;i<10;i++){
            in>>url[i]>>m[i];
            if(m[i]>top) top=m[i];
        }

        printf("Case #%d:\n",ca);
        for(int i=0;i<10;i++){
            if(m[i]==top)
                cout<<url[i]<<endl;
        }
    }

    return 0;
}
