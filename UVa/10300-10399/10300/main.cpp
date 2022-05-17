#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc, fc, fy, na, fe, rs;

    in>>tc;

    while(tc--){
        in>>fc;
        rs = 0;
        while(fc--){
            in>>fy>>na>>fe;
            rs+=(fy*fe);
        }
        printf("%d\n",rs);
    }

    return 0;
}
