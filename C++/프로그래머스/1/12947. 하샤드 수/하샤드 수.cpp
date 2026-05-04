#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    vector<int> v;
    int num = x;
    while (1) {
        v.push_back(num % 10);
        if (num == 0) break;
        num /= 10;
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++) sum += v[i];
    if (x % sum != 0) answer = false;
    return answer;
}