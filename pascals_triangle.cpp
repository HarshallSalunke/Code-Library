class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<int> ca;
        vector<vector<int>> sol;
        ca.push_back(1);
        sol.push_back(ca);       
        if(n == 1) return sol;
        for(int i=2;i<=n;i++) {
            vector<int> t;
            t.push_back(1);
            for(int j=0;j<i-2;j++) t.push_back(ca[j]+ca[j+1]);
            t.push_back(1);
            sol.push_back(t);
            ca = t;
        }
        return sol;
    }
};

