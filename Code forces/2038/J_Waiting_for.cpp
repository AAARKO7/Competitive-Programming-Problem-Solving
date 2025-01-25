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

    vector<pair<char,int>> v(n);

    int total=0;

    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    for(int i=0;i<n;i++){
        if(v[i].first=='P'){
            total+=v[i].second;
        }

        if(v[i].first=='B'){
            if(total>=v[i].second){
                total-=v[i].second;
                cout<<"NO"<<"\n";               
            }

            else{
                total=0;
                cout<<"YES"<<"\n";
            }
        }

    }
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