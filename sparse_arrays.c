#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i,m,j,k,count=0;
    char **p,**q;
    scanf("%d",&n);
    p=(char **)malloc(sizeof(char*) *n);
    for(i=0;i<n;i++)
        p[i]=(char *)malloc(sizeof(char*) *100);
    for(i=0;i<n;i++)
        scanf("%s",p[i]);
    scanf("%d",&m);
    q=(char **)malloc(sizeof(char*) *m);
    for(i=0;i<m;i++)
        q[i]=(char *)malloc(sizeof(char*) *100);
    for(i=0;i<m;i++)
        scanf("%s",q[i]);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           if((k=strcmp(p[j],q[i])) == 0)
           {
               count++;
           }
        }
        printf("%d\n",count);
        count = 0;
    }
}
