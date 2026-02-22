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
	string s;
	while (getline(cin, s) && s != "#") {
		cout << solve(s) << "\n";
	}
}