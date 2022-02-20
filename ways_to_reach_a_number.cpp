// t
// n k(number)
// a[n]

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--) {
        int n,k;
        vector<int> a;
        cin >> n >> k;
        for(int i=0;i<n;i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        int b[k+1] = {0};
        b[0] = 1;
        for(int i=0;i<n;i++) {
            for(int j=a[i];j<=k;j++) {
                b[j]+=b[j-a[i]];
            }
        }
        cout << b[k] << endl;
    }
    return 0;    
}