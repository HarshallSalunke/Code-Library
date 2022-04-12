#include <iostream>
#include<vector>
#include <algorithm>
#define ll long long int

using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--) {
	    ll n,xx,yy;
	    vector<ll> x,y;
	    cin >> n;
	    ll sum = 2*n;
	    for(ll i=0;i<n;i++) {
	        cin >> xx >> yy;
	        x.push_back(xx);
	        y.push_back(yy);
	    }
	   // v.begin(), v.end()
	    sort(x.begin(),x.end());
	    sort(y.begin(),y.end());
	    ll cnt=0,cnty=0;
	    for(ll i=0;i<n-1;i++) {
	       // cout << x[i] << " " << y[i] << " \n";
	        if(x[i]==x[i+1]) cnt++;
	        else {
	           // cout << cnt << " ";
	            if(cnt!=0) sum-=(cnt);
	            cnt=0;
	        }
	        if(y[i]==y[i+1]) cnty++;
	        else {
	           // cout << cnt << " ";
	            if(cnty!=0) sum-=(cnty);
	            cnty=0;
	        }
	    }
	    if(cnt != 0) sum-=cnt;
	    if(cnty!=0) sum-=cnty;
	    cout << sum << endl;
	}
	return 0;
}
