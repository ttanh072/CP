#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");
    if(!in.is_open()) return 0;


    int n,s,k;
    while(in>>k,!in.eof()){
        s=0;
        while(k--) {
            in>>n;
            s+=n;
        }
        printf("%d\n",s);
    }



    in.close();
    return 0;
}
