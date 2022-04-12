#include<stdio.h>
#include<math.h>
 
void solve(long long int a[],long long int N)
{
    long long int i,j,k,sum=0,var1,count=0;
    double var;
    for(i=0;i<N;i++)
    {
        for(j=i;j<N;j++,sum=0)
        {
            for(k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            if(sum>-1)
            {
                var=sqrt((double)sum);
                var1=var;
                if(var1 == var)
                   count++;
            }
        }
    }
    printf("%lld\n",count);
}
 
int main()
{
    long long int T,N,a[100000],i,k;
    scanf("%lld",&N);
    for(k=0;k<N;k++)
        scanf("%d",&a[k]);
    solve(a,N);
 
}
