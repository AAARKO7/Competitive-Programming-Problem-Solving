/*
    Solver: Arko7
    Date: 8 April,2023

*/

/*Li Hua and Maze(1797A)*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;

    cin>>n>>m;

    int x1,y1,x2,y2;

    cin>>x1>>y1>>x2>>y2;

    int a1,a2;

    if(x1-1>0 && x1+1<=n && y1-1>0 && y1+1<=m)
    {
        a1=4;
    }

    else if((x1==1 && y1==1) || (x1==n && y1==m) || (x1==1 && y1==m) || (x1==n && y1==1))
    {
       a1=2;
    }

    else
    {
        a1=3;
    }

    if(x2-1>0 && x2+1<=n && y2-1>0 && y2+1<=m)
    {
        a2=4;
    }

    else if((x2==1 && y2==1) || (x2==n && y2==m) || (x2==1 && y2==m) || (x2==n && y2==1))
    {
       a2=2;
    }

    else
    {
        a2=3;
    }

    cout<<min(a1,a2)<<endl;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
