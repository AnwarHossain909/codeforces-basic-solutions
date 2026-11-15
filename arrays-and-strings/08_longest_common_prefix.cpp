#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> words(n);
    for (string &word : words) cin >> word;
    string prefix = words.front();
    for (const string &word : words) {
        int length = min(prefix.size(), word.size());
        int index = 0;
        while (index < length && prefix[index] == word[index]) ++index;
        prefix.resize(index);
    }
    cout << prefix << '\n';
    return 0;
}
