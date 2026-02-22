#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;

int solve(int n, int k) {
	int num = 0;
	while (1) {
		int i = 1;
		int P = v[0];
		while (i * P <= v.back()) {
			if (binary_search(v.begin(), v.end(), i * P)) {
				num++;
				if (num == k) return i * P;
				v.erase(find(v.begin(), v.end(), i * P));
			}
			i++;
		}
	}
}
int main() {
	int N, K;
	cin >> N >> K;
	for (int i = 2; i <= N; i++) v.push_back(i);
	cout << solve(N, K);
}