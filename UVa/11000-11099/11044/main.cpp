#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc, n, m;
    in>>tc;
    while(tc--){
        in>>n>>m;
        printf("%d\n", (n/3) * (m/3));
    }


    return 0;
}
