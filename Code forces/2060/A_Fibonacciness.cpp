/*
    author: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

void solve()
{
    int a1,a2,a4,a5;
    cin>>a1>>a2>>a4>>a5;
    
    int maxfb=0;

    for(int a3=-500;a3<=500;++a3){
        int count=0;
        if(a3==a1+a2) count++;
        if(a4==a2+a3) count++;
        if(a5==a3+a4) count++;
        maxfb=max(maxfb, count);
    }
    
    cout<<maxfb<<"\n";
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