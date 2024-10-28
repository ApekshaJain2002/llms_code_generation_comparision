#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        sort(a,a+n);
        int ans = INT_MAX;
        for(int i=2;i<n;i++)
        {
            ans=min(ans,a[i]-a[i-2]);
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
