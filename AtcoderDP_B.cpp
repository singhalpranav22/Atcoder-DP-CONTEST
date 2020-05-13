#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[100001];
int main()
{

      ios::sync_with_stdio(0);
      cin.tie(0);

//	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	
    ll n,k;
    cin>>n>>k;

dp[1]=0;
ll a[n];
     
     for(ll i=1;i<=n;i++)
     	cin>>a[i];


    for(ll i=2;i<=k;i++)
    {
    	dp[i]=INT_MAX;
    	for(ll j=1;j<=i-1;j++)
    	{
    		dp[i]=min(dp[i],dp[j]+abs(a[i]-a[j]));
    	}
    }

    for(ll i=k+1;i<=n;i++)
    {

        dp[i]=INT_MAX;

        for(ll j=i-k;j<=i-1;j++)
        {

    		dp[i]=min(dp[i],dp[j]+abs(a[i]-a[j]));

        }

    }
  cout<<dp[n];

}
