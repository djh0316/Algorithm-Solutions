#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	char str[100000];
	for (int i = 0; i < n; i++) cin >> str[i];
	for (int i = 5; i >= 1; i--) cout << str[n - i];
}