#include <iostream>
#include <set>
using namespace std;

int main() {
	int T;
	cin >> T;
	int result = 0;
	while (T > 0) {
		int m, n;
		cin >> n >> m;
		for (int i = 1; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if ((i * i + j * j + m) % (i * j) == 0) result++;
			}
		}
		cout << result << "\n";
		result = 0;
		T--;
	}
}