#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int k) {
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		if (i % 10 != k % 10 && i % 10 != (2 * k) % 10) {
			v.push_back(i);
		}
	}
	cout << v.size() << "\n";
	for (auto num : v) {
		cout << num << " ";
	}
}
int main() {
	int N, K;
	cin >> N >> K;
	solve(N, K);
}