#include <iostream>
#include <vector>
using namespace std;

void sortMarbles(vector<int>& marbles) {
    int low = 0, mid = 0, high = marbles.size() - 1;
    
    while (mid <= high) {
        if (marbles[mid] == 0) {
            swap(marbles[low], marbles[mid]);
            low++;
            mid++;
        }
        else if (marbles[mid] == 1) {
            mid++;
        }
        else {  // marbles[mid] == 2
            swap(marbles[mid], marbles[high]);
            high--;
        }
    }
}

int main() {
    vector<int> marbles = {2, 0, 1, 2, 1, 0, 2, 1};  // Example input

    sortMarbles(marbles);

    cout << "Sorted marbles: ";
    for (int color : marbles) {
        cout << color << " ";
    }
    cout << endl;

    return 0;
}

