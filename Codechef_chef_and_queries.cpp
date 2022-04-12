#include<iostream>
#include<math.h>
#define lli long long int 

using namespace std;

class query{
public:
   lli L,R,X;
};

int main() {
    lli N,Q,j=0,chk;
    cin >> N >> Q;
    lli a[N];

    for(lli i=0;i<N;i++) {
        cin >> a[i];
    }

    query qq[Q];
    
    while (Q--) {

        cin >> chk;

        if(chk == 1) {
            lli l,r,x;
            cin >> l >> r >> x;
            qq[j].L = l;
            qq[j].R = r;
            qq[j++].X = x;
        }
        else {
            lli y,ans = 0;
            cin >> y;
            if(j == 0) {
                ans = a[y-1];
            }
            else {
                for(lli k = 0;k<j;k++) {
                    if((y >= qq[k].L) && (y <= qq[k].R)) {
                        lli tm = pow((qq[k].X + (y) - qq[k].L),2);
                        ans += tm+a[y-1]; 
                    }
                }
            }
            cout << ans << endl;
        }
    }
    


}