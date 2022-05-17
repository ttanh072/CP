#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream in("in");

    int loanDur, nRecord;
    double payDown, loanAmount, perc[101];

    while( (in>>loanDur>>payDown>>loanAmount>>nRecord), (loanDur>0) ){
        int m;
        double p;
        while(nRecord--){
            in>>m>>p;
            for(int i=m;i<101;i++){
                perc[i]=(1-p);
            }
        }

        int time = 0;
        double monthPay = loanAmount/loanDur;
        double currVal = (loanAmount + payDown) * perc[time++];
        double currLoan = loanAmount;

        while(currVal < currLoan){
            currLoan -= monthPay;
            currVal *= perc[time++];
        }

        if(time-1==1) printf("1 month\n");
        else printf("%d months\n",time-1);

    }

    return 0;
}
