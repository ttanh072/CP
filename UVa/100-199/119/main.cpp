#include <iostream>
#include <fstream>

using namespace std;


string people[11];
int money[11];

int getperson(string pp, int n){
    for(int i=0;i<n;i++){
        if(people[i]==pp) return i;
    }
}

int main()
{
    ifstream in("in");

    int n, t=1;

    while(in>>n){
        for(int i=0;i<n;i++){
            in>>people[i];
            money[i]=0;
        }

        for(int i=0;i<n;i++){
            string tp, g;
            int tm, tg, cb, ppl;

            in>>tp>>tm>>tg;

            if(tg!=0){
                cb=tm/tg;

                ppl = getperson(tp,n);

                money[ppl]-=tm;
                if(tm%tg>0) money[ppl]+=(tm-(cb*tg));

                while(tg--){
                    in>>g;
                    ppl = getperson(g,n);
                    money[ppl]+=cb;
                }
            }
        }

        if(t++>1) cout<<endl;
        for(int i=0;i<n;i++){
            cout<<people[i]<<" "<<money[i]<<endl;
        }
    }

    return 0;
}
