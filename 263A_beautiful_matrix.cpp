#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            int value;
            cin >> value;
            if (value == 1) {
                cout << abs(row - 2) + abs(col - 2) << '\n';
                return 0;
            }
        }
    }
    return 0;
}
