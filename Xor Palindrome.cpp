#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--) {
	    ll n,cnt0=0,cnt1=0;
	    cin >> n;
	    string s;
	    cin >> s;
	    for(ll i=0;i<n;i++) {
	        if(s[i] == '0') cnt0++;
	        else cnt1++;
	    }
	    if(n%2 != 0) {
	        if(((cnt0%2==0) && (cnt1%2 != 0)) || ((cnt0%2 != 0) && (cnt1%2 == 0))) cout << "YES\n";
	        else cout << "NO\n";
	    }
	    else {
	        if(((cnt0%2 == 0) && (cnt1%2 == 0)) || (cnt0 == cnt1)) cout << "YES\n";
	        else cout << "NO\n";
	    }
	}
	return 0;
}
