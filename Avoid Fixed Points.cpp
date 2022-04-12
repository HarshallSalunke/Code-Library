#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	ll t;
	cin >> t;
	while(t--) {
	    ll n;
	    cin >> n;
	    ll a,b[n+1];
	    for(ll i=1;i<=n;i++) {
	        cin >> a;
	        if(a >= i) b[i] = a-i;
	        else b[i]=-1;
	    }
	    ll cnt=0;
	    for(ll i=1;i<=n;i++) {
	        b[i]-=cnt;
	        if(b[i] == 0) cnt++;
	    }
	    cout << cnt << "\n";
	}
	return 0;
}
