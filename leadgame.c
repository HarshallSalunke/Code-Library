#include<stdio.h>

int max(int d[],int N)
{
    int i,j,max;
    max = d[0];
    j = 0;
    for(i=1;i<N;i++)
    {
        if(max < d[i])
        {
            j = i;
            max = d[i];
        }
    }
    return j;
}

void lead(int a[],int b[],int c[],int d[],int N)
{
    int i,j;
    for(i=0;i<N;i++)
    {
        if(a[i] > b[i])
        {
            c[i] = 1;
            d[i] = a[i] - b[i];
        }
        else if(a[i] < b[i])
        {
            c[i] = 2;
            d[i] = b[i] - a[i];
        }
    }
    i = max(d,N);
    printf("%d %d\n",c[i],d[i]);

}

int main()
{
    int N,i,j=0,k=0,l=0,m,s=0,n=0;
    scanf("%d",&N);
    int a[N],b[N],c[N],d[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[j]);
        a[j]+=s;
        scanf("%d",&b[k]);
        b[k]+=n;
        s=a[j];
        n=b[k];
        j++;
        k++;
    }
    lead(a,b,c,d,N);
}
