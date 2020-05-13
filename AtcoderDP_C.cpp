#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll dpa[100002];
ll dpb[100002];
ll dpc[100002];
int main()
{

      ios::sync_with_stdio(0);
      cin.tie(0);

      ll n;
      cin>>n;

      ll a[n+1],b[n+1],c[n+1];

      for(ll i=1;i<=n;i++)
        cin>>a[i]>>b[i]>>c[i];

      dpa[1]=a[1];
      dpb[1]=b[1];
      dpc[1]=c[1];

      for(ll i=2;i<=n;i++)
      {

        dpa[i]=max(a[i]+dpb[i-1],a[i]+dpc[i-1]);
        dpb[i]=max(b[i]+dpa[i-1],b[i]+dpc[i-1]);
        dpc[i]=max(c[i]+dpa[i-1],c[i]+dpb[i-1]);

      }

   cout<<max(dpa[n],max(dpb[n],dpc[n]));

}
