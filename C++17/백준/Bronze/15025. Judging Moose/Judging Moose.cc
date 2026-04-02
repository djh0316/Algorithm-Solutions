#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;
	
	if (a == 0 && b == 0) cout << "Not a moose";
	else if (a != b) cout << "Odd " << max(a, b) * 2;
	else cout << "Even " << a + b;
}