#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "DRAW" << endl;
        } else {
            cout << (a > b ? "ALICE" : "BOB") << endl;
        }
    }

    return 0;
}
