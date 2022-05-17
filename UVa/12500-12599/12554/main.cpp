#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    string song[16] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};

    int n;
    in>>n;
    string p[n];
    for(int i=0;i<n;i++) {
        in>>p[i];
    }

    int i=0, j=0, done=0;
    while(true){
        cout<<p[i]<<": "<<song[j]<<endl;
        if(i == n-1)
            done = 1;
        if(j == 15 && done)
            break;
        i++, j++;
        if(i >= n)  i = 0;
        if(j >= 16) j = 0;
    }


    return 0;
}
