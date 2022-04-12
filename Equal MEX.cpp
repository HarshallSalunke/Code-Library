#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--) {
	    ll n;
	    cin >> n;
	    ll a,cnt[n+1]={0};
	    for(ll i=0;i<2*n;i++) {
	        cin >> a;
	        cnt[a]++;
	    }
	    ll tmp=-1;
	    ll flag =0;
	    for(ll j=0;j<n+1;j++) {
	        if(cnt[j] == 0) {
	            tmp = j;
	            break;
	        }
	    }
	   // cout<< tmp << " ";
	    if(n == 1) {
	        if(cnt[0] == cnt[1]) flag=1;
	    }
	    else {
	        if(tmp == -1) tmp = n+1;
        	for(ll i=0;i<tmp;i++) {
        	    if(cnt[i] < 2) {
        	        flag=1;
        	        break;
        	    }
            }	        
	    }

	   // cout << tmp << " ";
	   // if(tmp == n) {
    // 	    for(ll i=0;i<n+1;i++) {
    // 	        if(cnt[i] <= 1) {
    // 	            flag=1;
    // 	            break;
    // 	        }
    // 	    }	  
	   // }
	   // else {
    // 	    for(ll i=0;i<tmp;i++) {
    // 	        if(cnt[i]%2 != 0) {
    // 	            flag=1;
    // 	            break;
    // 	        }
    // 	    }	        
	   // }

	    if(!flag) cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
