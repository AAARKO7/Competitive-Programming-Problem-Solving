/**
 *	author 	: Arko7
 *	problem : A. HQ9+
 *	created : 2024-01-25 06:34:00
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
    string s;
    cin>>s;

    bool result=false;

    for(int i=0;i<(int)s.length();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            result=true;
        }
    }

    if(result)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }
}

int main() 
{
	fastIO;

	// cin >> T;

	for(int t=1;t<=T;t++) 
	{
		// cout << "Case #" << t << ": ";
		solve();
        cout<<endl;
	}
	
	return 0;
}