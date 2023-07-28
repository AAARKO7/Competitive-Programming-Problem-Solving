/*Lucky?(1676A)*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s; //string 

    cin>>s; // string input

    if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5])
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

    while(t--) //test cases
    {
        solve(); // function call
    }

    return 0;
}