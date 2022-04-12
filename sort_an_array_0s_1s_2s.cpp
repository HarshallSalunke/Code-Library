#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int arr[3] = {0,0,0};
        for(int i=0;i<n;i++) arr[a[i]]++;
        // for(int i=0;i<3;i++) cout << arr[i] << " ";
        int k=0;
        for(int i=0;i<3;i++) {
            for(int j=0;j<arr[i];j++) a[k++] = i;;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
