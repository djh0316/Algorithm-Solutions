#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int R, C;
	int Rg, Cg, Rp, Cp;
	cin >> R >> C;
	cin >> Rg >> Cg >> Rp >> Cp;

	int count_G = 0, count_P = 0;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			char c;
			cin >> c;
			if (c == 'G') count_G++;
			if (c == 'P') count_P++;
		}
	}
	if (count_G == Rg * Cg && count_P == Rp * Cp) cout << "0";
	else if (count_G == Rg * Cg && count_P < Rp * Cp) cout << "1";
	else if (count_G < Rg * Cg) cout << "0";
	else cout << "error";
}