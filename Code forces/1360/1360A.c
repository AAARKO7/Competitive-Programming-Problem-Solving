/*Minimal Square(1360A)*/

#include<stdio.h>

void solve(int t)
{
    int a,b;
    scanf("%d%d",&a,&b);

    if(a>=b)
    {
        if(2*b>a)
        {
            printf("%d\n",(2*b)*(2*b));
        }

        else
        {
            printf("%d\n",a*a);
        }
    }

    else
    {
        if(2*a>b)
        {
            printf("%d\n",(2*a)*(2*a));
        }

        else
        {
            printf("%d\n",b*b);
        }
    }
}

int main()
{
    int t;

    scanf("%d",&t); 

    while(t--)
    {
        solve(t);
    }

    return 0;
}