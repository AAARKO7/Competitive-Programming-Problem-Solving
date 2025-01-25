/*
    author: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

void solve()
{
    int n,k;
    cin>>n>>k;

    vector<int> v(k+1,0);
    for(int i=0;i<k;i++){
        int b,c;
        cin>>b>>c;
        v[b]+=c;
    }
    sort(v.rbegin(),v.rend());

    int ans=0;

    for(int i=0;i<min(n,k);i++){
        ans+=v[i];
    }
    cout<<ans<<"\n";

}

int32_t main() 
{
	fast_IO();
 
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