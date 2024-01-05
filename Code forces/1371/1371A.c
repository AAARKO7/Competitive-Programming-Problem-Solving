/*Magical Sticks(1371A)*/

#include<stdio.h>

void solve(int t)
{
    int n;

    scanf("%d",&n);

    if(n%2==0)
    {
        printf("%d\n",n/2);
    }

    else
    {
        printf("%d\n",n/2+1);
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