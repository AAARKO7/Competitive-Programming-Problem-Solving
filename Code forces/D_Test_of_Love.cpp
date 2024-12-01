/*
    Solver: Arko7
    Date: 2024-07-15 14:11:02

*/

/*Test of Love*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,jump,swim;
    cin>>n>>jump>>swim;
    string s;
    cin>>s;

    vector<int> dp(n+2,-1);
    dp[0]=swim;

    for(int i=1;i<=n+1;i++){
        if(i!=n+1 && s[i-1]=='C'){
            continue;
        }

        for(int j=1;j<=jump;j++){
            if(i-j>=0 && (i-j==0 || s[i-j-1]=='L')){
                dp[i]=max(dp[i],dp[i-j]);
            }

            if(i>1 && s[i-2]=='W'){
                dp[i]=max(dp[i],dp[i-1]-1);
            }
        }
    }

    cout<<(dp[n+1]>=0 ? "YES\n" : "NO\n");
}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	/*Test case*/
	int t;
	cin>>t;
	for(int i=1;i<=t;i++) 
    {
		//cout<<"case #"<<i<<": ";
		solve();
	}
 
	return 0;
}