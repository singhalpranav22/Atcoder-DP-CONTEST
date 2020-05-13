#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define mx 1000000009
int main()
{


  ll n,W;
  cin>>n;
  cin>>W;
  ll v[n+1],w[n+1];
  ll sum=0;

  for(ll i=1;i<=n;i++)
    cin>>w[i]>>v[i];

  for(ll i=1;i<=n;i++)
    sum+=v[i];


  ll dp[sum+1];

  for(ll i=1;i<=sum;i++)
    dp[i]=mx;

  dp[0]=0;

//   cout<<sum<<endl;
  for(ll i=1;i<=n;i++)
  {

    
    for(ll j=sum;j>=v[i];j--)
    {
         
         dp[j]=min(dp[j],dp[j-v[i]]+w[i]);
    }


  }

 for(ll j=sum;j>=0;j--)
 {
    //  cout<<dp[j]<<" ";
 if(dp[j]<=W)
  {
    cout<<j;
    break;
  }
 }
}
