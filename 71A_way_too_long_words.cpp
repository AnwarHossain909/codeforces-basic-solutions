#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string word;
        cin >> word;
        if (word.size() > 10)
            cout << word.front() << word.size() - 2 << word.back() << '\n';
        else
            cout << word << '\n';
    }
    return 0;
}
