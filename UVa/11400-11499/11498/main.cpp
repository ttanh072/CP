#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    int k, n, m, x, y;

    while((in>>k),(k)){
        in>>n>>m;
        while(k--){
            in>>x>>y;
            if(x==n||y==m) printf("divisa\n");
            else if(x>n){
                if(y<m) printf("SE\n");
                else printf("NE\n");
            } else {
                if(y<m) printf("SO\n");
                else printf("NO\n");
            }
        }
    }

    return 0;
}
