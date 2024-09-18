#include <bits/stdc++.h>

using namespace std;

struct Item {
   int value;
   int weight;
};

class Solution {
   public:
      // Comparator to sort items by value-to-weight ratio
      bool static comp(Item a, Item b) {
         double r1 = (double) a.value / (double) a.weight;
         double r2 = (double) b.value / (double) b.weight;
         return r1 > r2;
      }

   // Function to return the maximum value in the knapsack
   double fractionalKnapsack(int W, Item arr[], int n) {
      sort(arr, arr + n, comp);  // Sort items by value-to-weight ratio

      int curWeight = 0;
      double finalvalue = 0.0;

      // Loop through sorted items and add full or fractional parts to the knapsack
      for (int i = 0; i < n; i++) {
         if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
         } else {
            int remain = W - curWeight;
            finalvalue += (arr[i].value / (double) arr[i].weight) * (double) remain;
            break; // Stop when the knapsack is full
         }
      }

      return finalvalue;
   }
};

int main() {
   int n = 3, weight = 50;
   Item arr[n] = { {100, 20}, {60, 10}, {120, 30} };
   Solution obj;
   double ans = obj.fractionalKnapsack(weight, arr, n);
   cout << "The maximum value is " << setprecision(2) << fixed << ans;
   return 0;
}
