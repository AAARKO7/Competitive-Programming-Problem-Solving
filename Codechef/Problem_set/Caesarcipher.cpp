/*
    Solver: aaarko7
    Date: 29 April,2023

*/

/*Caesar cipher*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s; // string input

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='z')
        {
            cout<<'b';
        }

        else if(s[i]=='y')
        {
            cout<<'a';
        }

        else
        {
            cout<<(char)(s[i]+2);
        }
    }

    return 0;
}