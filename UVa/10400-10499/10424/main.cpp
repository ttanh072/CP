#include <iostream>
#include <fstream>

using namespace std;

int getSum(string s){
    int total=0, num=0;

    for(int i=0,l=s.length();i<l;i++){
            if(s[i] >= 'a' && s[i] <= 'z')
                total += s[i]-96;
            if(s[i] >= 'A' && s[i] <= 'Z')
                total += s[i]-64;
    }

    while(total>=10){
        num=0;
        while(total>0){
            num+=total%10;
            total/=10;
        }
        total=num;
    }

    return total;
}

int main()
{
    ifstream in("in");
    //a97 z122 A65 Z90

    string s1, s2;
    int sum1, sum2;

    while(in>>s1>>s2){
        sum1=getSum(s1);
        sum2=getSum(s2);
        if (sum1<sum2)
            printf("%.2f %%\n", sum1*100.0/sum2);
        else
            printf("%.2f %%\n", sum2*100.0/sum1);
    }

    return 0;
}
