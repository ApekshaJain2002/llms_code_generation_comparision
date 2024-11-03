#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int chocolates[] = {5, 2, 12, 20, 1};
    int maxChocolates = *max_element(chocolates, chocolates + 5);
    cout << "The highest number of chocolates that one has is: " << maxChocolates << endl;
    return 0;
}
