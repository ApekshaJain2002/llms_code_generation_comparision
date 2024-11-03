#include <iostream>
using namespace std;

struct Tree {
    int id;
    Tree* next;
    Tree(int val) : id(val), next(nullptr) {}
};

bool hasCycle(Tree* head) {
    if (!head) return false;

    Tree* slow = head;
    Tree* fast = head;

    while (fast && fast->next) {
        slow = slow->next;          // Move slow by 1 step
        fast = fast->next->next;     // Move fast by 2 steps

        if (slow == fast) {          // Cycle detected
            return true;
        }
    }

    return false;  // No cycle found
}

int main() {
    // Example forest path
    Tree* root = new Tree(1);
    root->next = new Tree(2);
    root->next->next = new Tree(3);
    root->next->next->next = new Tree(4);
    root->next->next->next->next = root->next;  // Creating a cycle

    if (hasCycle(root)) {
        cout << "The path leads to a cycle. Be cautious!" << endl;
    } else {
        cout << "The path is safe to explore." << endl;
    }

    return 0;
}

