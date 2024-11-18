#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int value;
};

bool compare(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, vector<Item>& items) {
    // Sort items by value-to-weight ratio in descending order
    sort(items.begin(), items.end(), compare);

    double maxValue = 0.0;
    int currentWeight = 0;

    for (const auto& item : items) {
        if (currentWeight + item.weight <= W) {
            // If the item can be added in whole
            currentWeight += item.weight;
            maxValue += item.value;
        } else {
            // Take the fraction of the item that fits
            int remainingWeight = W - currentWeight;
            maxValue += item.value * ((double)remainingWeight / item.weight);
            break; // Knapsack is full
        }
    }

    return maxValue;
}

int main() {
    int W = 50; // Knapsack capacity
    vector<Item> items = {{10, 60}, {20, 100}, {30, 120}}; // {weight, value}

    double maxVal = fractionalKnapsack(W, items);
    cout << "Maximum value in Knapsack: " << maxVal << endl;

    return 0;
}

