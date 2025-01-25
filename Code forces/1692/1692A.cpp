/*Marathon(1692A)*/

#include<iostream>
using namespace std;

void solve(int t)
{
    int a[4];
    int sum=0;

    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<4;i++) 
    {
        if(a[i]>a[0]) 
        {
            sum++;
        }
    }

    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve(t);
    }

    return 0;
}