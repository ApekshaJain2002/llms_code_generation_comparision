#include <iostream>
#include <map>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        map<char, int> m;
        string n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n.length(); i++)
        {
            m[n[i]]++;
        }
 
        // for (auto it : m)
        //     cout << it.first << " " << it.second << endl;
 
        if (m.size() == 4)
            cout << 4 << endl;
        else if (m.size() == 1)
            cout << -1 << endl;
        else if (m.size() == 3)
        {
            cout << 4 << endl;
        }
        else
        {
            for (auto it : m)
            {
                if (it.second == 3)
                {
                    cout << 6 << endl;
                    ans = 1;
                    break;
                }
            }
            if (ans == 0)
 
                cout << 4 << endl;
        }
    }
 
    return 0;
}
