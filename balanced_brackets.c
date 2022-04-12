#include<stdio.h>
#include<string.h>
#define size 1000000
struct node
{
    int s[size];
    int top;
};

typedef struct node k;

void push(k *p,char data)
{
    p->top ++;
    p->s[p->top]=data;
}

char pop(k *p)
{
    char data;
    data=p->s[p->top];
    p->top --;
    return data;
}

int match(char a,char b)
{
    if(a=='('&&b==')')
        return 1;
    if(a=='['&&b==']')
        return 1;
    if(a=='{'&&b=='}')
        return 1;
    else
        return 0;

}

int check_par(k S,char exp[])
{
    int i;
    char temp;
    for(i=0;exp[i]!='\0';i++)
    {
           if((exp[i]=='(')||(exp[i]=='[')||(exp[i]=='{'))
            {
                push(&S,exp[i]);
            }
            if((exp[i]==')')||(exp[i]==']')||(exp[i]=='}'))
            {
                if(S.top!=-1)
                {
                     temp=pop(&S);
                    if(!match(temp,exp[i]))
                    {
                        return(0);
                    }
                }
                else
                {
                    return(0);
                }
            }
    }
    if(S.top==-1)
        return 1;
    else
        return 0;
}

int main()
{
    k p;
    int n,i,flag;
    char s[100000];
    p.top=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        flag=check_par(p,s);
        if(flag==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
