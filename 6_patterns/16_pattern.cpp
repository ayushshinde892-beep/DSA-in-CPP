#include <iostream>
using namespace std;

void pattern1(int n) {
    for (int i = 1; i <= n; ++i) {
        char ch = 'A' + (i - 1);
        for (int j = 0; j < i; ++j) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    pattern1(n);
    return 0;
}