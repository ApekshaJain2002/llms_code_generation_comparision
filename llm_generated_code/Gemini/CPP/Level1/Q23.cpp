#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int trips = 0;
    int count = 1;
    char prev = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i] == prev) {
            count++;
        } else {
            trips += (count + 4) / 5;
            count = 1;
            prev = s[i];
        }
    }

    trips += (count + 4) / 5;

    cout << trips;
    return 0;
}
