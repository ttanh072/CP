#include <iostream>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

	int tc, shuffles;
	string line = "\0";
	string suit[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};
	string value[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };

	in >> tc;
	while(tc--){
		cout << line;
		line = "\n";
		in >> shuffles;
        int shuffle[shuffles]={};
        int deck[shuffles][52]={};
		for(int i = 0; i < shuffles; i++){
			for(int j = 0; j < 52; j++){
				in >> deck[i][j];
				deck[i][j]--;
			}
		}

		int j = 0;
		string number;
		getline(in,number);
		while(getline(in,number) && number.length()){
			istringstream ss(number);
			ss >> shuffle[j];
			shuffle[j++]--;
		}

		for(int i = 0; i < 52; i++){
			int k = i;
			for(j = shuffles - 1; j > -1; j--)
				k = deck[shuffle[j]][k];
			cout << value[k % 13] << " of " << suit[k / 13] << '\n';
		}
	}
	return 0;
}
