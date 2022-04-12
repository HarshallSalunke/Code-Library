#include<stdio.h>

int main(){
    long long int T,N,i,f1,f2,f3;
    int flag;
    scanf("%lld",&T);
    while(T--){
        scanf("%lld",&N);
        f1=0;
        f2=1;
        flag=0;
        f3=f1+f2;
        while(f3<=N){
            if(f3==N){
                flag=1;
                break;
            }
            f1=f2;
            f2=f3;
            f3=f1+f2;
        }
        if(flag==1){
            printf("IsFibo\n");
        }
        else{
            printf("IsNotFibo\n");
        }
    }
}
