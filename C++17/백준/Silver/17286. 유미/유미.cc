#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

struct pos {
	int x;
	int y;
};
int main() {
	pos start;
	cin >> start.x >> start.y;

	vector<pos> p(3);
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	double dist10 = sqrt(pow(p[1].x - p[0].x, 2) + pow(p[1].y - p[0].y, 2));
	double dist21 = sqrt(pow(p[2].x - p[1].x, 2) + pow(p[2].y - p[1].y, 2));
	double dist02 = sqrt(pow(p[0].x - p[2].x, 2) + pow(p[0].y - p[2].y, 2));

	double d[3];
	for (int i = 0; i < 3; i++) {
		d[i] = sqrt(pow(start.x - p[i].x, 2) + pow(start.y - p[i].y, 2));
	}
	vector<double> result;
	result.push_back(d[0] + dist10 + dist21);
	result.push_back(d[0] + dist02 + dist21);
	result.push_back(d[1] + dist21 + dist02);
	result.push_back(d[1] + dist10 + dist02);
	result.push_back(d[2] + dist21 + dist10);
	result.push_back(d[2] + dist02 + dist10);
	sort(result.begin(), result.end());
	cout << (int)result[0];
}