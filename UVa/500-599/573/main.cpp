#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    float h, u, f, d;

    while(in>>h>>u>>d>>f, h){
        bool succ = true;
        float climb = 0;
        int day = 1;
        f=u*(f/100);

        while(succ) {
            climb+=u;
            if(u>0) u-=f;
            if(climb>h) break;
            climb-=d;
            if(climb<0) succ = false;
            day++;
        }

        if(succ) printf("success on day %d\n", day);
        else printf("failure on day %d\n", day-1);
    }

    return 0;
}
