#include <iostream>
#include <fstream>

using namespace std;

int getmin(int a, int b){
    return a<b?a:b;
}

int main()
{
    ifstream in("in");

    int l;

    while(in>>l, l){
        int min=l, lr=-l, ld=-l;
        string line;
        in>>line;
        for(int i=0,le=line.length();i<le;i++){
            if(line[i]=='Z') { min=0; break;}
            else if(line[i]=='R'){
                min = getmin(min,i-ld);
                lr=i;
            } else if(line[i]=='D'){
                min = getmin(min,i-lr);
                ld=i;
            }
        }

        cout<<min<<endl;
    }

    return 0;
}
