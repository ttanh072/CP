#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    string s;
    bool op=true;

    while(getline(in,s,'/')){
        for(int i=0, l=s.length();i<l;i++){
            if(s[i]=='"'){
                if(op)
                    printf("``");
                else
                    printf("''");
                op=!op;
            }
            else
                cout<<s[i];
        }
    }
    return 0;
}
