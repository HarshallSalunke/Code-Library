#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while(t--) {
	    long long int n,k,cnt=1;
	    cin >> n >> k;
	    for(long long int i=1;i<=n;i++) {
	        if(n == k) {
	            cout << i << " ";
	            continue;
	        }
	        if(i==1) cout << n << " ";
	        else if(cnt == k+1) cout << 1 << " ";
	        else if(cnt > k) cout << i-1 << " ";
	        else cout << i << " ";
	        cnt++;
	    }
	    cout << " \n";
	}
	return 0;
}
