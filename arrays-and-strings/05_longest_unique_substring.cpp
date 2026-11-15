#include <algorithm>
#include <array>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin >> ws, text);
    array<int, 256> last;
    last.fill(-1);
    int answer = 0, left = 0;
    for (int right = 0; right < static_cast<int>(text.size()); ++right) {
        unsigned char ch = text[right];
        left = max(left, last[ch] + 1);
        last[ch] = right;
        answer = max(answer, right - left + 1);
    }
    cout << answer << '\n';
    return 0;
}
