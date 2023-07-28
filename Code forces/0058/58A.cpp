/*Chat room(58A)*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    
    cin>>s;

    string x = "hello";
    int j = 0;

    for (int i=0;i<s.length();i++) 
    {
        if (s[i] == x[j]) 
        {
            j++;
        }   
    }

        if (j==x.length()) 
        {
            cout <<"YES"<<endl;
        }

        else
        {
            cout <<"NO"<<endl; 
        }  
}