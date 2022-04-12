#include <iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--) {
	    ll n,m,l;
	    cin >> n >> m >> l;
	    ll a[n] = {0};
	    for(ll i=0;i<m;i++) {
	        ll k;
	        cin >> k;
	        for(ll j=0;j<k;j++) {
	            ll tmp;
	            cin >> tmp;
	            a[tmp] = i;
	        }
	    }
	    ll prev,pres,tmp,cnt=1;
	    cin >> tmp;
	    prev = pres = tmp;
	    for(ll i=1;i<l;i++) {
	        cin >> tmp;
	        pres = tmp;
	        if(a[prev]!=a[pres]) {
	            cnt++;
	        }
	        prev = pres;
	    }
	    cout << cnt << endl;;
	}
	return 0;
}
