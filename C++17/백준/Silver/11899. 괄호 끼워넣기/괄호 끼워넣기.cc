#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

queue<char> q;

int main() {
	string s;
	cin >> s;

	int result = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ')') {
			if (q.empty()) result++;
			else q.pop();
		}
		else q.push('(');
	}
	result += q.size();
	cout << result;
}