#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char solve(char c) {
	if (c < 'A' || c > 'Z') return c;
	if (c - 5 >= 'A') return c - 5;
	else return c + 21;
}

int main() {
	string s;
	while (1) {
		getline(cin, s);
		if (s == "ENDOFINPUT") break;
		else if (s == "START");
		else if (s == "END");
		else {
			for (int i = 0; i < s.size(); i++) {
				cout << solve(s[i]);
			}
			cout << endl;
		}
	}
}