/*Codeforces Checking(1791A)*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    char x;

    cin>>x;
  
    if(x=='c' || x=='o' || x=='d' || x=='e' || x=='f' || x=='r' || x=='s')
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