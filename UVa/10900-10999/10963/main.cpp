#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc, w, d, y1, y2;
    bool yes;

    in>>tc;

    while(tc--){
        in>>w;
        yes = true;
        w--;
        in>>y1>>y2;
        d=y1-y2;
        while(w--){
            in>>y1>>y2;
            if(yes && d!=y1-y2){
                yes = false;
            }
        }

        if(yes) printf("yes\n");
        else printf("no\n");

        if(tc) printf("\n");

    }

    return 0;
}
