#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> numbers(n);
    unordered_map<int, int> seen;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        auto match = seen.find(target - numbers[i]);
        if (match != seen.end()) {
            cout << match->second << ' ' << i << '\n';
            return 0;
        }
        seen[numbers[i]] = i;
    }
    cout << -1 << '\n';
    return 0;
}
