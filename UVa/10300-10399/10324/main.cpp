#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    string line;
    int tc=1;

    while(in>>line){
        int n;
        in>>n;

        printf("Case %d:\n", tc++);

        while(n--){
            bool yes=true;
            int i,j,t;
            in>>i>>j;
            if(i>j){
                t=j;
                j=i;
                i=t;
            }

            for(int k=i;k<j;k++){
                if(line[k]!=line[k+1]) {
                    yes=false;
                    break;
                }
            }

            if(yes) printf("Yes\n");
            else printf("No\n");
        }
    }


    return 0;
}
