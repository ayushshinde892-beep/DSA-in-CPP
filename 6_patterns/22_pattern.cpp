#include <iostream>
#include <cmath>
using namespace std;

void printPattern(int n) {
    int size = 2 * n - 1;
    int center = n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int dist = max(abs(i - center), abs(j - center));
            int value = n - dist;
            cout << value << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printPattern(n);
    return 0;
}