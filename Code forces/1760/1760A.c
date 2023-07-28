/*Medium Number(1760A)*/

#include<stdio.h>

void solve(int t)
{   
    int a,b,c;
    
    scanf("%d%d%d",&a,&b,&c);
        
    if(a>b && a<c || a>c && a<b)
    {
        printf("%d\n",a);
    }

    else if(b>a && b<c || b>c && b<a)
    {
        printf("%d\n",b);
    }

    else if(c>a && c<b || c>b && c<a)
    {
        printf("%d\n",c);
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