#include <bits/stdc++.h>
// #definr ll long long int

using namespace std;

int main() {
	// your code goes here
	int x,y;
	cin >> x >> y;
	if(x >= y)cout << x-(y/2) << "\n";
	else cout << x/2 << "\n";
	return 0;
}
