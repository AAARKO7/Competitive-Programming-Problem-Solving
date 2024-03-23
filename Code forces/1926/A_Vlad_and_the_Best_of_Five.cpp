/**
 	user 	: Arko7
    Solved  : 2024-02-19 20:36:19
**/

#include<bits/stdc++.h>
using namespace std;

#define fastIO cin.tie(0)->sync_with_stdio(0)

int T=1;

void solve() 
{
    string s;
    cin>>s;

    int count1=0,count2=0;
    for(int i=0;i<5;i++)
    {
        if(s[i]=='A')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    if(count1>count2)
    {
        cout<<"A";
    }
    
    else
    {
        cout<<"B";
    }
}

int main() 
{
	fastIO;

	cin>>T;

	for(int t=1;t<=T;t++) 
	{
		//cout<<"Case #"<<t<<": ";
		solve();
        cout<<endl;
	}
	
	return 0;
}