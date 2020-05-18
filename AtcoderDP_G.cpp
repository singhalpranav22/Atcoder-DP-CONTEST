#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector <ll> v[100001];
ll dp[100001];
ll dfs(ll i,ll vis[])
{
 
      if(vis[i]!=0)
      	return dp[i];
 
      vis[i]=1;
      ll mx=0;
   for(auto it=v[i].begin();it!=v[i].end();it++)
   {
      mx=max(mx,dfs((*it),vis)+1);
      
   }
 
   return dp[i]=mx;
}
 
int main()
{
   
    
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
	ll vis[100001]={0};
   for(ll i=0;i<100001;i++)
   	dp[i]=0;
    ll n,m;
    cin>>n>>m;
 
    ll x,y;
    ll d[100001]={0};
    for(ll i=1;i<=m;i++)
    {
    	
    	cin>>x>>y;
    	v[x].push_back(y);
    }
    ll mx=INT_MIN;
    for(ll i=1;i<=n;i++)
    {
          
        mx=max(dfs(i,vis),mx);
    	
    }
 
    cout<<mx;
 
 
    
    
}