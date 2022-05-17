#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

string card;
bitset<4> ace;
bitset<4> jack;
bitset<4> king;
bitset<4> queen;
bitset<4> stopped;

inline int getSuit(){
	switch(card[1]){
		case 'S': return 0; break;
		case 'H': return 1; break;
		case 'D': return 2; break;
		default: return 3;
	}
}

inline int getValue(){
	switch(card[0]){
		case 'A': ace[getSuit()] = 1; return 4;
		case 'K': king[getSuit()] = 1; return 3;
		case 'Q': queen[getSuit()] = 1; return 2;
		case 'J': jack[getSuit()] = 1; return 1;
		default: return 0;
	}
}

int main(){
    ifstream in("in");

    while(in >> card){
		ace.reset();
		jack.reset();
		king.reset();
		queen.reset();
		stopped.reset();

		int currentValue = getValue();
		vector< vector<char> > suit(4, vector<char>(0));

		suit[getSuit()].push_back(card[0]);
		for(int i = 1; i < 13; ++i){
			in >> card;
			suit[getSuit()].push_back(card[0]);
			currentValue += getValue();
		}

		int maxIndex = 0;
		int maxCards = -1;
		int extraValue = 0;

		for(int i = 0; i < 4; ++i){
			int size = suit[i].size();

			if(maxCards < size){
				maxIndex = i;
				maxCards = size;
			}

			if(!size) extraValue += 2;
			else if(size == 1){
				if(king[i]) --currentValue;
				if(queen[i]) --currentValue;
				if(jack[i]) --currentValue;
				extraValue += 2;
			} else if(size == 2){
				if(queen[i]) --currentValue;
				if(jack[i]) --currentValue;
				++extraValue;
			} else if(size == 3 && jack[i])	--currentValue;

			if(ace[i]) stopped[i] = 1;
			else if(king[i] && size >= 2) stopped[i] = 1;
			else if(queen[i] && size >= 3) stopped[i] = 1;
		}

		if(stopped.count() == 4 && currentValue >= 16) cout << "BID NO-TRUMP\n";
		else if(currentValue + extraValue >= 14){
			char s;
			switch(maxIndex){
				case 0: s = 'S'; break;
				case 1: s = 'H'; break;
				case 2: s = 'D'; break;
				default: s = 'C';
			}
			cout << "BID " << s << '\n';
		} else cout << "PASS\n";
	}

	return 0;
}
