#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define append push_back
using namespace std;


int main() {
	ll t;
	cin >> t;
	while(t--) {
	    vector<ll> oi,oj,ei,ej,oa,ea;
	    ll ooa=-1,eoa=-1,ocnt=0,ecnt=0,n;
	    cin >> n;
	    ll tmp;
	   // ll c = 0;
	    for(ll i=0;i<n;i++) {
	        cin >> tmp;
	        if(tmp%2 != 0) {
	            ooa=eoa=i;
	           // c++;
	        } 
	        oa.append(tmp);
	        ea.append(tmp);
	    }
	    for(ll i=0;i<n;i++) {
	        if(i%2 == 0) {
	            if((oa[i]%2 == 0) && (ooa!=-1)) {
	                if((i!=ooa)){
    	                ocnt++;
    	                oi.append(i);
    	                oj.append(ooa);
    	                ooa = i;
	                }
	               // else if(c>2) {
    	           //     ocnt++;
    	           //     oi.append(i);
    	           //     oj.append(ooa-1);
    	           //     ooa--;  
	               // }
	               // else if(ooa-2 >= 0) {
    	           //     ocnt++;
    	           //     oi.append(i);
    	           //     oj.append(ooa-2);
    	           //     ooa-=2;  
	               // }
	            }
	            else if((oa[i]%2 != 0)) ooa=i; 
	           
	            
	            if((ea[i]%2 != 0) && (eoa!=-1)) {
	                if((i!=eoa)) {
    	                ecnt++;
    	                ei.append(i);
    	                ej.append(eoa);   
	                }
	               // else if(c>2) {
    	           //     ecnt++;
    	           //     ei.append(i);
    	           //     ej.append(ooa-1);
    	           //     eoa-;  
	               // }
	               // else {
    	           //     ecnt++;
    	           //     ei.append(i);
    	           //     ej.append(eoa-1);
    	           //     eoa--;
	               // }
	            }
	        }
	        else {
	            if((oa[i]%2 != 0) && (ooa!=-1)) {
	                if((i!=ooa)) {
    	                ocnt++;
    	                oi.append(i);
    	                oj.append(ooa);	                    
	                }
	               // else {
    	           //     ocnt++;
    	           //     oi.append(i);
    	           //     oj.append(ooa);
	               // }
	            }
	            if((ea[i]%2 == 0) && (eoa!=-1)) {
	                if(i!=eoa){
    	                ecnt++;
    	                ei.append(i);
    	                ej.append(eoa);
    	                eoa = i;   
	                }
	            }
	            else if((ea[i]%2 != 0)) eoa = i;
	        }
	    }
	    if((ocnt==0)&&(ecnt==0)) cout << "-1\n";
	    else if(ocnt > ecnt) {
	        cout << ecnt << "\n";
	        for(ll i=0;i<ecnt;i++) cout << ei[i]+1 << " " << ej[i]+1 << "\n";
	    }
	    else {
	        cout << ocnt << "\n";
	        for(ll i=0;i<ocnt;i++) cout << oi[i]+1 << " " << oj[i]+1 << "\n";
	    }
	}

	return 0;
}
