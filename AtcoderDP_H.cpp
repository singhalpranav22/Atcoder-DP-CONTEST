#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);

  ll m,n;
  cin>>m>>n;
  ll dp[m][n];

  string h[m];
  for(ll i=0;i<m;i++)
  cin>>h[i];
  int f=0;
 for(ll i=0;i<n;i++)
 {
     if(h[0][i]=='#')
     {
         dp[0][i]=0;
         f=1;
         continue;
     }
     if(f==0)
     dp[0][i]=1;
     else
     dp[0][i]=0;
 }
 
 f=0;
  for(ll i=0;i<m;i++)
 {
     if(h[i][0]=='#')
     {
         dp[i][0]=0;
         f=1;
         continue;
     }
     if(f==0)
     dp[i][0]=1;
     else
     dp[i][0]=0;
 }
  for(ll i=1;i<m;i++)
  {
    for(ll j=1;j<n;j++)
    {
      if(h[i][j]=='#')
        dp[i][j]=0;
      else
        dp[i][j]=((dp[i-1][j])%mod+(dp[i][j-1])%mod)%mod;
    }
  }

  
  cout<<dp[m-1][n-1];


}