#include <iostream>
#include <fstream>

using namespace std;

int round(bool clockwise, int n1, int n2){
    if(clockwise){
        int t = n1;
        n1 = n2;
        n2 = t;
    }
    return n1>=n2? (n1-n2) : (40-(n2-n1));
}

int main()
{
    ifstream in("in");
    int c[4], s;

    while((in>>c[0]>>c[1]>>c[2]>>c[3]),(c[0]||c[1]||c[2]||c[3])){
        s=0;

        for(int i=0;i<3;i++){
            s+=round(i%2,c[i],c[i+1]);
        }

        printf("%d\n", 1080+s*9);
    }

    return 0;
}
