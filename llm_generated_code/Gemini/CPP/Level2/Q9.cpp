#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int weight, value;
    double ratio;
};

bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

double fractionalKnapsack(vector<Item>& items, int capacity) {
    int n = items.size();

    // Calculate value-to-weight ratio for each item
    for (int i = 0; i < n; ++i) {
        items[i].ratio = (double)items[i].value / items[i].weight;
    }

    // Sort items by decreasing order of ratio
    sort(items.begin(), items.end(), compare);

    double totalValue = 0.0;
    int currentWeight = 0;

    // Fill the knapsack greedily
    for (int i = 0; i < n; ++i) {
        if (currentWeight + items[i].weight <= capacity) {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        } else {
            int remainingWeight = capacity - currentWeight;
            double fraction = (double)remainingWeight / items[i].weight;
            totalValue += fraction * items[i].value;
            break;
        }
    }

    return totalValue;
}

int main() {
    vector<Item> items = {{2, 10}, {3, 5}, {5, 15}, {7, 7}};
    int capacity = 8;
    double maxValue = fractionalKnapsack(items, capacity);
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}
