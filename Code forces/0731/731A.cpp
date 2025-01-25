/*
    Solver: Arko7
    Date: 5 April,2023

*/

/*Night at the Museum(731A)*/

#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string s;

    cin>>s;

    int count=0;
    char x='a'; // starts with alphabet 'a'

    //finding the value
    for(int i=0;i<s.length();i++)
    {
        count+=min(abs(x-s[i]), 26-abs(x-s[i])); // min finds the minimum value between two operations & abs=positive value
        x=s[i]; //inserting the value for count 
    }

    cout<<count<<endl;
}

int main()
{
    int t=1;
    
    while(t--)
    {
        solve();
    }

    return 0;
}