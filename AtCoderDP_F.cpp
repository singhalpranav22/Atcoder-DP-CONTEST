#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
  string s;
  string t;
  cin>>s;
  cin>>t;
  ll m=s.length();
  ll n=t.length();

  ll dp[m+1][n+1];

  for(ll i=0;i<=m;i++)
  {
for(ll j=0;j<=n;j++)
{

  if(i==0 || j==0)
  {
    dp[i][j]=0;
    continue;
  }

  if(s[i-1]==t[j-1])
  {
    
    dp[i][j]=dp[i-1][j-1]+1;
  }
  else
  {
    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
  }


}

  }
// cout<<dp[m][n];
  vector<char> ans;
   ll i=m;
   ll j=n;
  ll tp=dp[m][n];

  while(tp>0)
  {


    if(dp[i][j]>dp[i-1][j] && dp[i][j]>dp[i][j-1])
    {
      ans.push_back(s[i-1]);
      // cout<<s[i-1]<<" ";
      i=i-1;
      j=j-1;
      tp=dp[i][j];
      continue;
    }
    else
    {
      if(dp[i-1][j]>dp[i][j-1])
      {
        i=i-1;
        tp=dp[i][j];
      }
      else
      {
        j=j-1;
        tp=dp[i][j];
      }

    }

  }

  for(ll i=ans.size()-1;i>=0;i--)
  {
    cout<<ans[i];
  }

}
