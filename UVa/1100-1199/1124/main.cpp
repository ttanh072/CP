#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    string s;
    while(getline(in,s,'/')){
        cout<<s;
    }


    return 0;
}
