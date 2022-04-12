#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	// your code goes here
	ll n,d;
	cin >> n >> d;
	ll a[n],cnt=0;
	for(ll i =0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	for(ll i=0;i<n-1;i++) {
	    if(abs(a[i]-a[i+1]) <= d) {
	        cnt++;
	        i++;
	    }
	}
	cout << cnt;
	return 0;
}
