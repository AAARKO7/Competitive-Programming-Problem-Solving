/*Polycarp and Coins(1551A)*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;

    cin>>n; // input

    if(n%3==0) 
    {
        cout<<n/3<<" "<< n/3<<endl;
    }
    
    else if(n%3==1)
    {
        cout<<n/3+1<<" "<<n/3<<endl;
    }
    
    else 
    {
        cout<<n/3<<" "<<n/3+1<<endl;
    }

}

int main()
{
    int t;

    cin>>t; // test cases

    while(t--)
    {
        solve(); //function call
    }

    return 0;
}