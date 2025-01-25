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

    vector<int> a(n);
    for(auto &x:a){
        cin>>x;
    }

    int count=0;
    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])==5 || abs(a[i]-a[i+1])==7){
            count++;
        }
        else{
            break;
        }
    }

    if(count==n-1){
        cout<<"YES"<<"\n";
    }

    else{
        cout<<"NO"<<"\n";
    }

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