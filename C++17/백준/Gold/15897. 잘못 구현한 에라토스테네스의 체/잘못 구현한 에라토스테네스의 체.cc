#include <iostream>
#include <cmath>
using namespace std;

long long test2(long long n) {
	long long result = 0;

	long long K = sqrt(n);

	for (int i = 1; i <= n / K; i++) {
		result += (n - 1) / i;
	}

	for (int i = 1; i <= K; i++) result += (n - 1) / i;
	if (n % K == 0) result++;
	result += n % K;
	return result;
}

int main() {
	long long n;
	cin >> n;
	cout << test2(n);
}