#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> numbers(n);
    for (int &number : numbers) cin >> number;
    k %= n;
    reverse(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.begin() + k);
    reverse(numbers.begin() + k, numbers.end());
    for (int i = 0; i < n; ++i) cout << numbers[i] << (i + 1 == n ? '\n' : ' ');
    return 0;
}
