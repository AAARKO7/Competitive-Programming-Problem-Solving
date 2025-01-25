/*
    Solver: Arko7
    Date: 5 May,2023

*/

/*Ordinary Numbers(1520B)*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;

    cin>>n;

    string s=to_string(n);

    int dig=s.length();

    int count=0;

    for(int i=1;i<=9;i++) //all same digit numbers loop i=1(1,11,111..)
    {
        long long x=i;

        for(int j=1;j<=dig;j++) //check
        {
            if(x<=n)
            {
                count++;
            }

            x=x*10+i;
        }
    }

    cout<<count<<endl;
}

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        solve();
    }
}

