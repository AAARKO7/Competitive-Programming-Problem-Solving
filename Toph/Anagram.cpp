/*
    Solver: AAArko7
    Date: 29 April,2023

*/

/*Is Anagram*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;

    cin>>a>>b;

    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);

    //sort
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(a==b)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
