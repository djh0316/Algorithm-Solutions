#include <iostream>
#include <algorithm>
using namespace std;

int cnt[10] = { 0, };

int main() {
	int n;
	cin >> n;

	while (1) {
		if (n == 0) break;
		if (n == 10) {
			cnt[1]++;
			cnt[0]++;
			break;
		}
		cnt[n % 10]++;
		n /= 10;
	}
	int num = (cnt[6] + cnt[9] + 1) / 2;
	cnt[6] = cnt[9] = num;
	int result = 0;
	for (int i = 0; i < 10; i++) {
		result = max(result, cnt[i]);
	}
	cout << result;
}