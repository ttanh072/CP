#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int k;

    while(in>>k, k){
        int m;
        in>>m;
        string course[k];
        for(int i=0;i<k;i++) in>>course[i];

        bool yes=true;
        while(m--){
            int c, r;
            in>>c>>r;
            int t=0;
            while(c--){
                string line;
                in>>line;
                if(yes){
                    for(int i=0;i<k;i++){
                        if(course[i]==line) t++;
                    }
                }
            }
            if(t<r) yes=false;
        }
        if(yes) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
