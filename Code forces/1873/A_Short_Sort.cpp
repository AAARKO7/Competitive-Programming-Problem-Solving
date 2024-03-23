/**
 *	author 	: Arko7
 *	problem : Short Sort
 *	created : 2024-01-06 21:40:20
**/

#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define double long double


#define vi vector<int>
#define pi vector<pair<int,int> > 
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


int T=1;

void solve() 
{   
    string g="abc";
    string s;

    cin>>s;

    int count=0;

    for(int i=0;i<3;i++)
    {
        if(g[i]!=s[i])
        {
            count++;
        }
    }

    if(count<=2)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return;
    
}

int main() 
{
	fastIO;

	cin>>T;

	for(int t=1;t<=T;t++) 
	{
		// cout << "Case #" << t << ": ";
		solve();
        cout<<endl;
	}
	
	return 0;
}