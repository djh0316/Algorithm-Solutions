#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int x[1000][1000];

int main() {
	int n, a, b;
	bool result = false;
	cin >> n >> a >> b;
	a--; b--;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> x[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		if (x[a][b] < x[a][i]) result = true;
		if (x[a][b] < x[i][b]) result = true;
	}
	if (result == false) cout << "HAPPY";
	else cout << "ANGRY";
}