#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
 
        vector<int> cubes(n);
        for (int i = 0; i < n; ++i) {
            cin >> cubes[i];
        }
        int fav = cubes[f-1];
        sort(cubes.begin(), cubes.end(), greater<int>());
        bool a=true,b=true;
        for(int i=0;i<k;i++)
        {
            if(cubes[i]==fav)
            {
                b=false;
            }
        }
        for(int i=k;i<n;i++)
        {
            if(cubes[i]==fav)
            {
                a=false;
            }
        }
        if(a==true)
        cout<<"YES"<<endl;
        else if(b==true)
        cout<<"NO"<<endl;
        else
        cout<<"MAYBE"<<endl;
        
    }
 
    return 0;
}
