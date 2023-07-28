/*Borze(32B)*/

#include<bits/stdc++.h>
using namespace std;

void solve(char s[])
{
    for(int i=0;i<strlen(s);i++) //check & print
    {
        if(s[i]=='.') 
        {
            cout << "0" ;
        }
        
        else 
        {
            if(s[i+1]=='-') 
            {
                cout<<"2";
                i++;
            }

            else 
            {
                cout<<"1";
                i++;
            }
        }
    }
    cout<<endl;   
}

int main()
{
    char s[201];

    cin>>s; // string input

    solve(s);
   
   return 0;
}