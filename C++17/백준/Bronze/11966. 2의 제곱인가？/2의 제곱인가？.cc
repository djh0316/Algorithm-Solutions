#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int solve(int num) {
	for (int i = 0; i <= 30; i++) {
		if(num == pow(2, i)) return 1;
	}
	return 0;
}
int main() {
	int n;
	cin >> n;
	cout << solve(n);
}