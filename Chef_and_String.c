#include<stdio.h>

int main()
{
    long long int T,i,count;
    char a[100000];
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%s",a);
        for(i=0,count=0;a[i]!='\0';)
        {
            if(a[i]=='x' && a[i+1]=='y')
            {
                count++;
                i=i+2;
            }
            else if(a[i]=='y' && a[i+1]=='x')
            {
                count++;
                i=i+2;
            }
            else
                i++;
        }
        printf("%lld\n",count);
    }
}
