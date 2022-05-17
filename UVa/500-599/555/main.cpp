#include <iostream>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in");

    char dealer;
	vector< bitset<52> > hands;
	vector< pair<int, int> > range;

	while(in >> dealer, dealer != '#'){
		int i;
		hands = vector< bitset<52> >(4);
		vector< pair<int, int> > range(4, pair<int, int>(52, 0));

		switch(dealer){
			case 'S':   i = 0;    break;
			case 'W':   i = 1;    break;
			case 'N':   i = 2;    break;
			default:    i = 3;
		}

		for(int j = 51; j > -1; j--){
			char suit;
			char value;

			i = (i + 1) % 4;
			in >> suit >> value;

			switch(suit){
                case 'C':   suit = 0;     break;
                case 'D':   suit = 1;     break;
                case 'S':   suit = 2;     break;
                default:    suit = 3;
			}

			switch(value){
				case 'T':   value = 8;    break;
				case 'J':   value = 9;    break;
				case 'Q':   value = 10;   break;
				case 'K':   value = 11;   break;
				case 'A':   value = 12;   break;
				default:    value = value - 50;
			}

			hands[i][suit * 13 + value] = 1;
			range[i].first = min(range[i].first, suit * 13 + value);
			range[i].second = max(range[i].second, suit * 13 + value);
		}

		for(i = 0; i < 4; ++i){
			switch(i){
				case 0:     cout << "S:";   break;
				case 1:     cout << "W:";   break;
				case 2:     cout << "N:";   break;
				default:    cout << "E:";
			}

			for(int j = range[i].first, curentCards = 0; j <= range[i].second, curentCards < 13; j++){
				if(hands[i][j]){
					curentCards++;

					switch(j / 13){
						case 0:     cout << " C";   break;
						case 1:     cout << " D";   break;
						case 2:     cout << " S";   break;
						default:    cout << " H";
					}

					switch(j % 13){
						case 8:    cout << "T";    break;
						case 9:    cout << "J";    break;
						case 10:    cout << "Q";    break;
						case 11:    cout << "K";    break;
						case 12:    cout << "A";    break;
						default:    cout << j % 13 + 2;
					}
				}
			}
			cout << '\n';
		}
	}

    return 0;
}
