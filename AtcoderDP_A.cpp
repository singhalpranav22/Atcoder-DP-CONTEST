#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[100001];
int main()
{



	
    ll n;
    cin>>n;

dp[1]=0;
     
     ll a[n+1];
     for(ll i=1;i<=n;i++)
     	cin>>a[i];

     dp[2]=dp[1]+abs(a[2]-a[1]);

     for(ll i=3;i<=n;i++)
     {
     	dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
     }
  cout<<dp[n];
}
