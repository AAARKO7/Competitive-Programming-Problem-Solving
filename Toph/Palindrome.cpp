/*
    Solver: AAArko7
    Date: 29 April,2023

*/

/*Is Palindrome*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;

    int x=s.length();

    for(int i=0;i<x;i++)
    {
        if(s[i]!=s[x-1-i])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;

    return 0;
}