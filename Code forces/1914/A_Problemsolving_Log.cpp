/**
 *	author 	: Arko Adhikary
 *	problem : A. Problemsolving Log
 *	created : 01-01-2024 11:30 PM
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
    int n;
    string s;
 
    cin>>n>>s;
 
    int array[27]={0};
 
    for(int i=0;i<n;i++) 
    {
        array[s[i]-64]++;
    }
 
    int count=0;
 
    for(int i=1;i<=26;i++) 
    {
        if(array[i]>=i) 
        {
            count++;
        }
    }
 
    cout<<count;
}

int main() 
{
	fastIO;

	cin>>T;

	for(int t=1;t<=T;++t) 
	{
		// cout << "Case #" << t << ": ";
		solve();
        cout<<endl;
	}
	
	return 0;
}