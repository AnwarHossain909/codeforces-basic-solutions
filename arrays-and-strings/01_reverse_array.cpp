#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int &number : numbers) cin >> number;
    reverse(numbers.begin(), numbers.end());
    for (int i = 0; i < n; ++i) cout << numbers[i] << (i + 1 == n ? '\n' : ' ');
    return 0;
}
