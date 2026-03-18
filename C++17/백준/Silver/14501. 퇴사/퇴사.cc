#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int max_profit = 0;
int T[15];
int P[15];

void dfs(int pos, int result) {
	if (pos > n) return;
	else if (pos == n) max_profit = max(max_profit, result);
	else {
		dfs(pos + T[pos], result + P[pos]);
		dfs(pos + 1, result);
	}
}
int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> T[i] >> P[i];
	}
	dfs(0, 0);
	cout << max_profit;
}