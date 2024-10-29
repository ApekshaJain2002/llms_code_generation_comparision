#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str = "meow";
        string str1 = "MEOW";
        string s;
        cin >> s;
        int cnt = 0;
        if ((s[0] != 'm' && s[0] != 'M') || (s[n - 1] != 'w' && s[n - 1] != 'W'))
        {
            cnt = -1;
        }
        else
        {
            int j = 0;
            for (int i = 1; i < n; i++)
            {
                if (s[i] != str[j] && s[i] != str1[j])
                {
                    j++;
                }
 
                if (s[i] == str[j] || s[i] == str1[j])
                {
                    continue;
                }
                else
                {
                    cnt = -1;
                }
            }
        }
        if (cnt == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
