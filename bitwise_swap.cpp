#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--) {
	    ll n,tm;
	    cin >> n;
	    ll a[n],b[n],c[214748364] = {0};
	    for(ll i=0;i<n;i++) {
	        cin >> tm;
	        a[i] = tm;
	        b[i] = tm;
	        c[tm] = i;
	    }
	    sort(a,a+n);
	    ll j=0,cnt=0;
	    for(ll i=0;i<n;i++) {
	        j=i;
	       // cout << b[j] << " ";
	       // cout << j <<  " *-*- ";
	       // if(a[i] == b[i]) cnt++;
	       // cout << a[i] << " " << b[i] << " ";
	        while(a[j]!=b[j]) {
	           // if(a[i] == b[i]) cnt++;
	            if(a[j]&b[j] != 0) {
	                ll tmp = b[j];
	                b[j] = a[j];
	                b[c[a[j]]] = tmp;
	               // cout << b[j] << " " << b[c[a[j]]] << " ";
	                ll tm = c[tmp];
	                c[tmp] = c[b[j]];
	                c[b[j]] = tm;
	                j = c[tmp];
	                
	               // cout << j << " *** ";
	            }
	            else break;
	        }
	        cout << b[i] << " " << i << " ";
	       // if(a[i] == b[i]) cnt++;
	    }
	    for(ll i=0;i<n;i++) {
	        if(a[i] != b[i]) {
	            cnt = 1;
	            break;
	        }
	    }
	   // cout << cnt << " ";
	    if(!cnt) cout << "Yes\n";
	    else cout << "No\n";
	}
	return 0;
}






















#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--) {
	    ll n,tm;
	    cin >> n;
	    ll a[n],b[n],c[214748364] = {0};
	    for(ll i=0;i<n;i++) {
	        cin >> tm;
	        a[i] = tm;
	        b[i] = tm;
	        c[tm] = i;
	    }
	    sort(a,a+n);
	    ll j=0,cnt=0;
	    for(ll i=0;i<n;i++) {
	        j=i;
    	   // for(ll k=0;k<n;k++) {
    	   //     cout << a[k] << " " << b[k] << " ";
    	   // }
    	   // cout << "\n";
	       // cout << b[j] << " ";
	       // cout << j <<  " *-*- ";
	       // if(a[i] == b[i]) cnt++;
	       // cout << a[i] << " " << b[i] << " ";
	        while(a[j]!=b[j]) {
	           // cout << (a[j]&b[j]) << " ** ";
	           //cout << a[j] << " " << b[j] << " ** ";
	           // if(a[i] == b[i]) cnt++;
	            ll u = a[j]&b[j];
	            if(u != 0) {
	                ll tmp = b[j];
	                b[j] = a[j];
	                b[c[a[j]]] = tmp;
	               // cout << b[j] << " -- " << b[c[a[j]]] << " ";
	                ll tm = c[tmp];
	                c[tmp] = c[b[j]];
	                c[b[j]] = tm;
	                j = c[tmp];
	                
	               // cout << j << " *** ";
	            }
	            else break;
	           // u = a[j]&b[j];
	        }
	       // cout << b[i] << " " << i << " ";
	       // if(a[i] == b[i]) cnt++;
	    }
	    for(ll i=0;i<n;i++) {
	        if(a[i] != b[i]) {
	            cnt = 1;
	            break;
	        }
	    }
	   // cout << cnt << " ";
	    if(!cnt) cout << "Yes\n";
	    else cout << "No\n";
	}
	return 0;
}





















#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--) {
	    ll n,tm;
	    cin >> n;
	    ll a[n],b[n],c[214748364] = {0};
	    for(ll i=0;i<n;i++) {
	        cin >> tm;
	        a[i] = tm;
	        b[i] = tm;
	        c[tm] = i;
	    }
	    sort(a,a+n);
	    ll j=0,cnt=0;
	    for(ll i=0;i<n;i++) {
	       if(a[i] != b[i]) {
	           if((a[i]&b[i]) != 0) {
	               ll tmp = b[i];
	               b[i] = a[i];
	               b[c[a[i]]] = tmp;
	               ll tm = c[tmp];
	               c[tmp] = c[b[i]];
	               c[b[i]] = tm;
	           }
	           else {
	               ll flag = 0;
	               ll j =i+1;
	               ll r =  ((b[i]&a[j]));
	               ll rr = ((a[i]!=a[j]));
	               for(j=i+1;j<n;j++) {
	                   r =  ((b[i]&a[j]));
	                   rr = ((a[i]&a[j]));
	                   //cout << r << " " << rr << " ** ";
	                   if((b[i]!=a[j]) && r!=0 && rr!=0) {
	                       // cout << b[i] << " " << (b[i]&a[j]) << " ** ";
	                       
	                       flag = 1;
        	               ll tmp = b[i];
        	               b[i] = a[j];
        	               b[c[a[j]]] = tmp;
        	               ll tm = c[tmp];
        	               c[tmp] = c[b[i]];
        	               c[b[i]] = tm;
        	               
        	               tmp = b[i];
        	               b[i] = a[i];
        	               b[c[a[i]]] = tmp;
        	               tm = c[tmp];
        	               c[tmp] = c[b[i]];
        	               c[b[i]] = tm;
        	               break;
	                   }
	               }
	               if((j == n) && (flag == 0)) {
	                   //cout << " ********* ";
	                   break;
	               }
	           }
	       }
	       // cout << b[i] << " " << a[i] << " ** ";
	       if(a[i] == b[i]) cnt++;
	    }
	   // cout << cnt << " ";
	   // for(ll i=0;i<n;i++) {
	   //     if(a[i] != b[i]) {
	   //         cnt = 1;
	   //         break;
	   //     }
	   // }
	   // cout << cnt << " ";
	    if(cnt==n) cout << "Yes\n";
	    else cout << "No\n";
	}
	return 0;
}
