#include <stdio.h>

int main(void) {
    int T,N,X,Y,K,M,flag = 0;
    scanf("%d",&T);
    while(T--) {
        scanf("%d%d%d%d",&N,&K,&X,&Y);
        M=X;
        flag = 0;
        while(1) {
            if(N<X){
                break;
            }
            if(X==Y) {
                flag = 1;
                break;
            }
            X = (X+K)%N;
            if(M==X) {
                break;
            }
        }
        if(flag==1){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
	// your code goes here
	return 0;
}

