#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> scores(n);
    for (int &score : scores) cin >> score;
    int qualified = 0;
    for (int score : scores)
        if (score > 0 && score >= scores[k - 1]) ++qualified;
    cout << qualified << '\n';
    return 0;
}
