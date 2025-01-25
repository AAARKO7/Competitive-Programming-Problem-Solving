/**
 *	author 	: Arko Adhikary
 *	problem : A. Odd One Out
 *	created : 03-01-2024 12:07 AM
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
    int a,b,c;

    cin>>a>>b>>c;
 
    if(a==b) 
    {
        cout<<c;
    }
    
    else if(b==c) 
    {
        cout<<a;
    }

    else 
    {
        cout<<b;
    }
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