#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int value;
    double valuePerWeight;
};

// Comparator function to sort items by value-to-weight ratio in descending order
bool compare(Item a, Item b) {
    return a.valuePerWeight > b.valuePerWeight;
}

double fractionalKnapsack(vector<int>& weights, vector<int>& values, int capacity) {
    int n = weights.size();
    vector<Item> items;

    // Create items with value-to-weight ratio
    for (int i = 0; i < n; i++) {
        items.push_back({weights[i], values[i], (double)values[i] / weights[i]});
    }

    // Sort items by value per weight
    sort(items.begin(), items.end(), compare);

    double totalValue = 0.0;

    for (const auto& item : items) {
        if (capacity >= item.weight) {  // Take whole item if capacity allows
            totalValue += item.value;
            capacity -= item.weight;
        } else {  // Take fraction of item if capacity is limited
            totalValue += item.valuePerWeight * capacity;
            break;
        }
    }

    return totalValue;
}

int main() {
    vector<int> weights = {2, 3, 5, 7};
    vector<int> values = {10, 5, 15, 7};
    int capacity = 8;

    double maxTreasureValue = fractionalKnapsack(weights, values, capacity);

    cout << "Maximum treasure value the hunter can carry: " << maxTreasureValue << endl;

    return 0;
}

