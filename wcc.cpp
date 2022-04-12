#include <bits/stdc++.h>
#define ll unsigned int

using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--) {
	    ll x,cntc=0,cntn=0;
	    cin >> x;
	    string s;
	    cin >> s;
	    for(ll i=0;i<14;i++) {
	        if(s[i] == 'C') cntc+=2;
	        else if(s[i] == 'N') cntn+=2;
	        else {
	            cntc++;
	            cntn++;
	        }
	    }
	    if(cntc > cntn) cout << 60*x << endl;
	    else if(cntc < cntn) cout << 40*x << endl;
	    else cout << 55*x << endl;
	    
	}
	return 0;
}
