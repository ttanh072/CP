#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int tc, a, b, c;

    in>>tc;

    for(int i=0; i<tc; i++){
        printf("Case %d: ",(i+1));

        in>>a>>b>>c;

        if(b>a && a>c || c>a && a>b) printf("%d\n",a);
        if(a>b && b>c || c>b && b>a) printf("%d\n",b);
        if(a>c && c>b || b>c && c>a) printf("%d\n",c);

    }

    return 0;
}
