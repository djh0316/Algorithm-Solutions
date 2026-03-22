#include <iostream>
#include <string>
using namespace std;

bool is_vowel(char c) {
	c = toupper(c);
	if (c == 'A' || c=='E' || c== 'I' || c == 'O' || c=='U') return true;
	return false;
}
int main() {
	int T;
	cin >> T;
	cin.ignore();
	while (T > 0) {
		string str;
		getline(cin, str);
		int result = 0;
		int num = 0;
		for (int i = 0; i < str.length(); i++) {
			if (is_vowel(str[i])) result++;
			if (str[i] == ' ') num++;
		}
		cout << str.length() - result - num << " " << result << "\n";
		T--;
	}
}