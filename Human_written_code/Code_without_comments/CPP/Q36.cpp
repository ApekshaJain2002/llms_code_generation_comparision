#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long res=0;
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long cnt=1,ans=0;
        
        map<long long,long long> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        for(auto it:m)
        {
            ans = max(ans,it.second);
        }
        
        while(ans<n)
        {
            if(2*ans > n)
            {
                res++;
                res += (n-ans);
                ans=n;
            }
            else
            {
                res++;
                res += ans;
                ans = 2*ans;
            }
        }
        cout<<res<<endl;
    }
 
    
}
