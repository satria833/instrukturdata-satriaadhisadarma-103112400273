#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    cout << "Output:" << endl;
    for (int i = n; i >= 1; i--) {
        // kiri (turun)
        for (int j = i; j >= 1; j--)
            cout << j;
        cout << " * ";
        // kanan (naik)
        for (int j = 1; j <= i; j++)
            cout << j;
        cout << endl;
    }
    cout << "*" << endl;
    return 0;
}
