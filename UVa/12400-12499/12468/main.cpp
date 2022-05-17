#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int a, b;

    while(in>>a>>b, (a!=-1||b!=-1)){
        int press1=0, press2=0;

        if(a>b){
            press1 = a-b;
            press2 = 100-a+b;
        }
        else{
            press1 = b-a;
            press2 = 100-b+a;
        }

        if(press1<press2) printf("%d\n",press1);
        else printf("%d\n",press2);
    }

    return 0;
}
