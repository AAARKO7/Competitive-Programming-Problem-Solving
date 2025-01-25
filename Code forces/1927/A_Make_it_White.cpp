/**
 	user 	: Arko7
 	problem : A. Make it White
    Solved  : 2024-02-09 23:29:41
**/

#include<bits/stdc++.h>
using namespace std;

#define fastIO cin.tie(0)->sync_with_stdio(0)

int T=1;

void solve() 
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int countr=0,countl=0;

    for(int i=0;i<=n;i++)
    {
        if(s[i]=='B')
        {
            countl=i;
            break;
        }
    }

    for(int i=n;i>=0;i--)
    {
        if(s[i]=='B')
        {
            countr=i;
            break;
        }
    }

    cout<<(countr-countl)+1;

    
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