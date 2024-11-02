#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    vector<int> ans;
    set<pair<int, int>, greater<pair<int,int>>> st;

    for (int i = 0; i < k; i++)
        st.insert({ arr[i], i });

    ans.push_back((st.begin())->first);

    for (int i = k; i < arr.size(); i++) {
        st.insert({ arr[i], i });
        st.erase({ arr[i - k], (i - k) });
        ans.push_back(st.begin()->first);
    }

    return ans;
}

int main() {
    vector<int> arr = { 2, 3, 7, 9, 5, 1, 6, 4, 3 };
    int k = 3;
    vector<int> res = maxSlidingWindow(arr, k);
    for (auto i : res)
        cout << i << " ";
    return 0;
}

