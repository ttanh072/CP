#include <iostream>
#include <fstream>

#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    ifstream in("in");

    int n, p, bmet, tmet, t = 1;
    double tprice, bprice;
    string temp, best, skip;

    while(in>>n>>p, n&&p){
        bmet = bprice = -1;

        in.ignore();
        for (int i = 0; i < n; ++i)
            getline(in, skip);

        while(p--){
            getline(in, temp);
            in>>tprice>>tmet;

            in.ignore();
            for (int i = 0; i < tmet; ++i)
                getline(in, skip);

            if (tmet > bmet || (tmet == bmet && (tprice < bprice || bprice == -1))){
                best = temp;
                bprice = tprice;
                bmet = tmet;
            }
        }

        if(t>1) cout<<endl;
        cout<<"RFP #"<<t++<<"\n"<<best<<endl;
    }

    return 0;
}
