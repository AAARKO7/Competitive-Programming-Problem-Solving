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

    vector<int> v(n);
    for(auto &x:v){
        cin>>x;
    }

    unordered_map<int,int> last;

    for(int i=0;i<n;i++){
        last[v[i]]=i;
    } 

    int sum=0;
    for(auto &x:last){
        sum+=(x.second+1);
    }

    cout<<sum<<"\n";
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