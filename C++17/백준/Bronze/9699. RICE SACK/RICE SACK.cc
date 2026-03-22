#include <iostream>
#include <set>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		set <int> s;
		int num;
		for (int i = 0; i < 5; i++) {
			cin >> num;
			s.insert(num);
		}
		cout << "Case #" << i + 1 << ": " << *(--s.end()) << "\n";
		s.clear();
	}
}