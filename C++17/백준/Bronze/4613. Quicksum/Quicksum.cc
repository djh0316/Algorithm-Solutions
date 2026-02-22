#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solve(string s) {
	int result = 0;
	int i = 1;
	for (auto c : s) {
		if (c != ' ') result += (c - 'A' + 1) * i;
		i++;
	}
	return result;
}
int main() {
	vector<string> v;
	string s;
	while (1) {
		getline(cin, s);
		if (s == "#") break;
		v.push_back(s);
	}

	for (auto str: v) {
		cout << solve(str) << "\n";
	}
}