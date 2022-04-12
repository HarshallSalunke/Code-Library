#include<stdio.h>

int main()
{
    long long int T,N,K,P,lose=0;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld%lld",&N,&K);
        lose=0;
        while(N--)
        {
            scanf("%lld",&P);
            if(P>K)
            {
                lose+=(P-K);
            }
        }
        printf("%lld\n",lose);
    }
}
