#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    
    ll t;
    cin >> t;
    while(t--) {
        ll n,tx,ty,px=0,py=0;
        vector<ll> edge,x,y;
        cin >> n;
        for(ll i=0;i<n;i++) {
            cin >> tx >> ty;
            x.push_back(tx);
            y.push_back(ty);
            if(i>=1) {
                ll p = pow((px-tx),2);
                ll pp = pow((py-ty),2);
                ll e = sqrt(p+pp);
                edge.push_back(e);
            }
            px=tx;
            py=ty;
        }
        ll os=0;
        for(ll i=0;i<n;i++) {
            // cout << "*** ";
           ll sm=0;
           vector<ll> ar,e;
           for(ll j=i+2;j<n-1;j++) {
               if(j == i+2) {
                   ll p = pow((x[i]-x[j]),2);
                   ll pp = pow((y[i]-y[j]),2);
                   ll tmp = sqrt(p+pp);
                   e.push_back(tmp);
                   ll s = (edge[0]+edge[1]+tmp)/2;
                   ll area = sqrt(s*(s-edge[0])*(s-edge[1])*(s-tmp));
                   sm+=area;
                   ar.push_back(area);
               }
               else if(j+1 == n-1) {
                   ll p = pow((x[i]-x[j]),2);
                   ll pp = pow((y[i]-y[j]),2);
                   ll tmp = sqrt(p+pp); 
                   ll s = (edge[n-2]+edge[n-1]+tmp)/2;
                   ll area = sqrt(s*(s-edge[n-2])*(s-edge[n-1])*(s-tmp));
                   sm+=area;
                   ar.push_back(area);
               }
               else {
                   ll p = pow((x[i]-x[j]),2);
                   ll pp = pow((y[i]-y[j]),2);
                   ll tmp = sqrt(p+pp);
                   e.push_back(tmp);
                   ll s = (edge[j-1]+e[j-3]+tmp)/2;
                   ll area = sqrt(s*(s-edge[j-1])*(s-e[j-3])*(s-tmp));
                   sm+=area;
                   ar.push_back(area);
               }
           }
           ll smm=0;
           for(ll i=0;i<ar.size();i++) {
               smm+=ar[i];
               if(smm < (sm-smm)) os+=smm;
               else os+=(sm-smm);
              cout << os << " ";
           }
        }
        cout << (2*os)%998244353 << endl;
    }
    
	return 0;
}
