#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end(), compare);

	int result = -1;
	for (int i = 0; i < n - 2; i++) {
		if (v[0] >= v[1] + v[2]) v.erase(v.begin());
		else {
			result = v[0] + v[1] + v[2];
			break;
		}
	}
	cout << result;
}