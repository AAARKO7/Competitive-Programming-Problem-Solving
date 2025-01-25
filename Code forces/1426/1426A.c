/*Floor Number(1426A)*/

#include<stdio.h>

void solve(int t)
{
    int n,x;

    scanf("%d%d",&n,&x);

    int apps=0;
    
    int i=0;
    while(apps<n)
    {
        apps=(i*x)+2;
        
        i++;
    }
    printf("%d\n",i);
    
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