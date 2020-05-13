#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll knap(ll wg,int n,ll v[],ll w[])
{
 
   ll dp[n+1][wg+1];
   for(ll i=0;i<=n;i++)
   {

    for(ll j=0;j<=wg;j++)
      dp[i][j]=0;
   }

   for(ll i=0;i<=n;i++)
   {
    for(ll j=0;j<=wg;j++)
    {
        
        if(i==0 || j==0)
        {
          dp[i][j]=0;
          
        }

        else if(w[i-1]<=j)
        {

           dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
        }
        else
          dp[i][j]=dp[i-1][j];

        // cout<<dp[i][j]<<" ";

    }
    // cout<<endl;
   }
    // cout<<endl;

   return dp[n][wg];
  
}

int main()
{
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    

 int n;
 ll wg;
 cin>>n>>wg;


 ll v[n],w[n];

 for(ll i=0;i<n;i++)
 {
 cin>>w[i]>>v[i];

 }

cout<<knap(wg,n,v,w);



    }
