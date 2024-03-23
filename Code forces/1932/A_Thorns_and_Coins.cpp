/**
 	user 	: Arko7
 	problem : A. Thorns and Coins
    Solved  : 2024-02-18 18:27:50
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

    int count=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='@')
        {
            count++;
        }

        if(s[i]=='.')
        {
            continue;
        }

        if(s[i]=='*' && s[i+1]=='*')
        {
            break;
        }
    }

    cout<<count;

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