/*Calculator(contest 219158O)*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int a=0;
    int b=0;
    int i;
    for(i=0 ; i<s.length() ; i++) 
    {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            int dig=0;
            for(int j=i-1 ; j>=0 ; j--) 
            {
                a = (s[j]-48) *pow(10,dig) + a;
                dig++;
            }

            dig=0;
            for(int j=s.length()-1 ; j>i ; j--) 
            {
                b = (s[j]-48) *pow(10,dig) + b;
                dig++;
            }

            break;
        }
    }

    // cout << a << b << i << endl;
    if(s[i]=='+') 
    {
        cout << a+b << endl;
    }
    else if(s[i] == '-') 
    {
        cout << a-b << endl;
    }
    else if(s[i] == '*') 
    {
        cout << a*b << endl;
    }
    else if(s[i] == '/') 
    {
        cout << a/b << endl;
    }


   return 0; 
}