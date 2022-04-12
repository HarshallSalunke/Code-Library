#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int T;
	cin >> T;
	while(T--) {
	    long long int N,M;
	    int ans=0,ans1=0;
	    cin >> N >> M;
	    char c;
	    for(long long int i=0;i<N;i++) {
	        ans1 = 0;
	        for(long long int j=0;j<M;j++) {
	            cin >> c;
	            int tmp = c - 48;
	            ans1 ^= tmp;
	        }
	        ans ^= ans1;
	    }
	    if(ans) {
	        cout << "YES" << endl;
	    }
	    else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
