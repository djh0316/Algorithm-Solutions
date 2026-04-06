#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	cin >> s;
	for (int i = 1; i <= n; i++) {
		set<string> set;
		bool duplicate = false;
		for (int j = 0; j <= n - i; j++) {
			string str = s.substr(j, i);
			int num1 = set.size();
			set.insert(str);
			int num2 = set.size();
			if (num1 == num2) {
				duplicate = true;
				break;
			}
		}
		if (!duplicate) {
			cout << i;
			break;
		}
	}
}