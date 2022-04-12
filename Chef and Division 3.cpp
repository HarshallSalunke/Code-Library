#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int T;
	cin >> T;
	while(T--) {
	    long int N,K,D,A,sm;
	    sm=0;
	    cin >> N >> K >> D;
	    while(N--) {
	        cin >> A;
	        sm+=A;
	    }
	    if(sm < K) {
	        cout << "0\n";
	    }
	    else if(sm/K > D) {
	        cout << D << "\n";
	    }
	    else {
	        cout << sm/K << "\n";
	    }
	}
	return 0;
}
