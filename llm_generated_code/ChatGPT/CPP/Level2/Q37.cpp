#include <iostream>
#include <string>
using namespace std;

int min_coins_to_transform(const string& s) {
    int count_0 = 0, count_1 = 0;
    for (char c : s) {
        if (c == '0') count_0++;
        else count_1++;
    }
    return min(count_0, count_1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << min_coins_to_transform(s) << endl;
    }
    return 0;
}
