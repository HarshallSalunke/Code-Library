#include<stdio.h>
int main(){
    short int a[8][8],*p,T,K,i;
    scanf("%hi",&T);
    while(T--){
        p=a[0];
        *p=1;
        for(p++;p!=a[0]+64;p++){
            *p=0;
        }
        scanf("%hi",&K);
        for(p=a[0]+K;p!=a[0]+(K+9) && p!=a[0]+64;p++){
            *p=2;
        }
        for(p=a[0],i=0;p!=a[0]+64;p++,i++){
            if(i!=0 && i%8==0){
                printf("\n");
            }
            if(*p==1){
                printf("O");
            }
            else if(*p==2){
                printf("X");
            }
            else if(*p==0){
                printf(".");
            }
        }
        printf("\n");
    }
}
