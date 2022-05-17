#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int i=1, n, v, z, nz;

    while((in>>n), (n)){
        z = nz = 0;
        while(n--){
            in>>v;
            if(v==0) z++;
            else nz++;
        }
        printf("Case %d: %d\n", i++, nz-z);
    }


    return 0;
}
