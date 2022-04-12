#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,k;
	    int cnt1=0,cnt0=0;
	    cin >> n >> k;
	    string s;
	    cin >> s;
	    int tmp=0;
	    for(int i=0;i<n/2;i++) if(s[i] != s[n-(i+1)]) tmp++;
	    if(tmp > k) cout << "NO\n";
	    else {
	        if(n%2 != 0) cout << "YES\n";
	        else {
	            if((k-tmp)%2 == 0) cout << "YES\n";
	            else cout << "NO\n";
	        }
	    }
	}
	return 0;
}
