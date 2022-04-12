#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	// your code goes here
	    ll d;
	    cin >> d;
	    if(d%2 != 0) cout << "-1\n";
	    else {
	        cout << "0 " << "0\n";
	        cout << d << " 0\n";
	        cout << d/2 << " " << d/2 << "\n";
	        cout << d/2 << (-1)*(d/2) << "\n";
	    }
	return 0;
}
