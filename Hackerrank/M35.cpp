/*
    Solver: AAArko7
    Date: 29 April,2023

*/

/*Project Euler #1: Multiples of 3 and 5*/

#include<bits/stdc++.h>
using namespace std;

long long num(long long x)
{
    return x*(x+1)/2; // triangular numnber
}

void solve()
{
    long long n;

    cin>>n;

    n=n-1; //bellow n
    
    long long a=3*num(n/3); // sum multi 3
    long long b=5*num(n/5); // sum multi 5
    long long c=15*num(n/15); // sum multi 15

    cout<<(a+b-c)<<endl;
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