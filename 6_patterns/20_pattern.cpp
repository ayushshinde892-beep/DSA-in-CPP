#include <iostream>
using namespace std;

void printPattern(int n) {
    // Top half
    for (int i = 0; i < n - 1; i++) {
        int stars = i + 1;
        int spaces = 2 * (n - i - 1);
        for (int j = 0; j < stars; j++) cout << "*";
        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }

    // Middle row
    for (int j = 0; j < 2 * n; j++) cout << "*";
    cout << endl;

    // Bottom half
    for (int i = n - 2; i >= 0; i--) {
        int stars = i + 1;
        int spaces = 2 * (n - i - 1);
        for (int j = 0; j < stars; j++) cout << "*";
        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }
}

int main() {
    int n = 5;
    printPattern(n);
    return 0;
}