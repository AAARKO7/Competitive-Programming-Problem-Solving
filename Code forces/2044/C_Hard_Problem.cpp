/*
    author: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

void solve()
{
    int m,a,b,c;
    cin>>m>>a>>b>>c;

    int r1=min(a,m);
    int r2=min(b,m);

    int rem1=m-r1;
    int rem2=m-r2;

    int trem=rem1+rem2;
    int nopref=min(c,trem);

    int ans=r1+r2+nopref;

    cout<<ans<<"\n";
}

int32_t main() 
{
	fast_IO();
 
	/*Test case*/
	int t=1;
	cin>>t;
	for(int i=1;i<=t;i++) 
    {
		//cout<<"case #"<<i<<": ";
		solve();
	}
 
	return 0;
}