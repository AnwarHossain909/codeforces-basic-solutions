#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, value;
    cin >> n >> value;
    int best = value, current = value;
    for (int i = 1; i < n; ++i) {
        cin >> value;
        current = max(value, current + value);
        best = max(best, current);
    }
    cout << best << '\n';
    return 0;
}
