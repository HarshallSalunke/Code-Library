#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n,x,y,flag=0;
	    cin >> n >> x >> y;
	    int a[n],b[n],c[2000]={0};
	    c[x]=1;
	    c[y]=1;
	    for(int i=0;i<n;i++) cin >> a[i];
	    for(int i=0;i<n;i++) cin >> b[i];
	    flag=0;
	    for(int i=0;i<n;i++) {
	       // cout << c[b[i]-a[i]] << "\n";
	       if(b[i] < a[i]) {
	           flag=1;
	           break;
	       }
	       else if((c[b[i]-a[i]] == 0)) {
	            flag=1;
	            break;
	        }
	    }
	   // cout << flag << " ";
	    if(flag==0) cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
