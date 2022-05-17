#include <iostream>
#include <fstream>

using namespace std;

int smallest(int sl, int n){
    if(sl==1) return n+1;
    int nl=0;
    for (;sl;sl/=10,nl++);
    return smallest(nl, n+1);
}

int main()
{
    ifstream in("in");

    string xo;

    while(in>>xo,xo!="END"){
        if(xo.length()==1 && xo[0]=='1') cout<<"1"<<endl;
        else cout<<smallest(xo.length(),1)<<endl;
    }

    return 0;
}
