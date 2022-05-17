#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    printf("Lumberjacks:\n");

    int tc;

    in>>tc;

    while(tc--){
        int b, c, m=0;
        in>>c;
        for(int i=1;i<10;i++){
            b=c;
            in>>c;
            if(b>c) m++;
            if(b<c) m--;
        }

        if(m==9 || m==-9) printf("Ordered\n");
        else printf("Unordered\n");
    }


    return 0;
}



