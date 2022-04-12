#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--) {
        long long int n,k,x;
        cin >> n >> k >> x;
        if(k<x) cout << "-1" << endl;
        else {
            long long int j=0;
            for(long long int i=0;i<n;i++) {
                cout << j << " ";
                j++;
                if(j==x) j=0;
            }
            cout << endl;
        }
    }
	return 0;
}
