#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasCycle(const vector<int>& graph) {
    int n = graph.size();
    unordered_set<int> visited;

    // Time complexity: O(n)
    // Space complexity: O(n)
    // Lines of code: 12
    // Cyclomatic complexity: 2
    for (int i = 0; i < n; ++i) {
        if (visited.count(i)) {
            return true; // Cycle detected
        }
        visited.insert(i);
        int next = graph[i];
        while (next != i && !visited.count(next)) {
            visited.insert(next);
            next = graph[next];
        }
        if (next != i) {
            return true; // Cycle detected
        }
    }
    return false;
}

int main() {
    vector<int> graph = {2, 0, 2, 1, 1, 0};
    bool hasCycleInGraph = hasCycle(graph);
    cout << "Has cycle: " << hasCycleInGraph << endl;

    return 0;
}
