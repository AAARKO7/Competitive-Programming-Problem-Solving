/*
    Solver: Arko7
    Date: 6 April,2023

*/

/*Coins(1814A)*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;

    cin>>n>>k;

    long long x=n-k;

    if(n%2==0 || n%k==0 || x%2==0)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }
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