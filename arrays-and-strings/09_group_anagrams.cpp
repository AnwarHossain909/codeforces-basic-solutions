#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, vector<string>> groups;
    while (n--) {
        string word, key;
        cin >> word;
        key = word;
        sort(key.begin(), key.end());
        groups[key].push_back(word);
    }
    for (const auto &[key, group] : groups) {
        for (int i = 0; i < static_cast<int>(group.size()); ++i)
            cout << group[i] << (i + 1 == static_cast<int>(group.size()) ? '\n' : ' ');
    }
    return 0;
}
