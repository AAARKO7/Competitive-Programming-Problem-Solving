/*
    author: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

void solve()
{
    int n;
    cin>>n;
    int a[]={1,2,4};
    int count=0;
    for (int i=0;i<3;i++){
        if (n>=a[i]){
            n-=a[i];
            count++;
        }
    }

    cout<<count<<"\n";

}

int32_t main() 
{
	fast_IO();
 
	/*Test case*/
	int t=1;
	// cin>>t;
	for(int i=1;i<=t;i++) 
    {
		//cout<<"case #"<<i<<": ";
		solve();
	}
 
	return 0;
}