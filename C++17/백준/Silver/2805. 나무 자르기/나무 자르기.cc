#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	sort(v.begin(), v.end());

	long long low = 0; long long high = *max_element(v.begin(), v.end());
	int height= -1;
	while (low <= high) {
		long long mid = (high + low) / 2;
		long long result = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] > mid) result += v[i] - mid;
		}
		if (result >= k) {
			height = mid;  // 후보 저장
			low = mid + 1;  // 더 큰 높이 탐색
		}
		else {
			high = mid - 1;
		}
	}
	cout << height;
}