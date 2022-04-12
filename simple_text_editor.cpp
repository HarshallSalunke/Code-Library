#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string str[1000000];

int main() {
    int q,i=-1;
    cin >> q;
    string ss = "";
    while(q--) {
        string tmp;
        cin >> tmp;
        if(tmp == "1") {
            string m;
            cin >> m;
            str[++i] = ss;
            ss += m;
            //cout << ss << " ";
        }
        else if(tmp == "2") {
            int val;
            string t;
            cin >> val;
            str[++i] = ss;
            int num = ss.length() - val;
            //cout <<  num << "\n";
            /*for(int i=0;i<num;i++) {
                t[i] = ss[i];
                //cout << t[i] << " ";
            }
            t[i] = '\0';*/
            ss.erase(num); 
        }
        else if(tmp == "3") {
            int k;
            cin >> k;
            cout << ss[k-1] << endl;
        }
        else {
            if(i < 0) {
                ss = "\n";
            }
            else {
                ss = str[i--];
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
