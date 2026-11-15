#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> numbers(n), result(n, 1);
    for (long long &number : numbers) cin >> number;
    long long prefix = 1;
    for (int i = 0; i < n; ++i) {
        result[i] = prefix;
        prefix *= numbers[i];
    }
    long long suffix = 1;
    for (int i = n - 1; i >= 0; --i) {
        result[i] *= suffix;
        suffix *= numbers[i];
    }
    for (int i = 0; i < n; ++i) cout << result[i] << (i + 1 == n ? '\n' : ' ');
    return 0;
}
