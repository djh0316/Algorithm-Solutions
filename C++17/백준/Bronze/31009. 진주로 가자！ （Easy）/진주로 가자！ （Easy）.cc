#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	vector<int> v;
	int cost = 0;
	while (T > 0) {
		string name;
		int num;
		cin >> name >> num;
		if (name == "jinju") cost = num;
		v.push_back(num);
		T--;
	}
	sort(v.begin(), v.end());
	int result = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] > cost) result++;
	}
	cout << cost << "\n" << result;
}