/*String Task(118A)*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; 

    cin>>s;

   for(int i=0;i<s.length();i++) 
   {
        s[i]=tolower(s[i]); //lowercase the string

        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            continue; // skiping vowels
        }

        else
        {
            cout<<"."<<s[i];
        }
   }

    return 0;
}