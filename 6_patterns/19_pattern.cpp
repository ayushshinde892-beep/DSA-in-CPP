#include <iostream>
using namespace std;

void pattern(int n)
{
    // Upper half
    for (int i = 0; i < n; i++)
    {
        // Left stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        // Middle spaces
        for (int j = 0; j < 2 * i; j++)
            cout << " ";

        // Right stars
        for (int j = 0; j < n - i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = 0; i < n; i++)
    {
        // Left stars
        for (int j = 0; j <= i; j++)
            cout << "*";

        // Middle spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";

        // Right stars
        for (int j = 0; j <= i; j++)
            cout << "*";

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    pattern(n);

    return 0;
}