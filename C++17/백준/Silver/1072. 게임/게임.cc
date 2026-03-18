#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

long long solve(long long x, long long y, long long z) {
	long long temp;
	int i = 0;
	if (z >= 99) return -1;

	while (1) {
		x += 10;
		y += 10;
		temp = y * 100 / x;
		if (temp != z) break;
		i += 10;
	}
	x -= 10;
	y -= 10;
	while (1) {
		x += 1;
		y += 1;
		temp = y * 100 / x;
		i += 1;
		if (temp != z) break;
	}

	return i;
}
int main() {
	long long x, y, z;
	cin >> x >> y;
	z = y * 100 / x;

	cout << solve(x, y, z);
}