/**
 *	author 	: Arko7
 *	problem : Dice_Combination
 *	created : 2024-02-01 23:14:20
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

const int MOD =1e9+7;

int T=1;

void solve() 
{
    int n;
    cin>>n;

    vector<int>dp(n+1);

    dp[0]=1;

    for(int i=1;i<=n;i++)
    {   long long sum=0;
        for(int j=1;j<=min(i,(int)6);j++)
        {
            sum+=dp[i-j];
        }

        dp[i]=sum % MOD;
    }
    
    cout<<dp[n];
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