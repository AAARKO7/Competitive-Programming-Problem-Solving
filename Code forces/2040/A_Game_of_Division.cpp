/*
    author: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    for(int &x : a) {
        cin>>x;
    }

    
    for(int i=0;i<n;i++){
        bool q=true;
        for(int j=0;j<n;j++){
            if(i!=j && (a[i] % k == a[j] % k)){
                q = false;
                break;
            }
        }
        if(q){
            cout<<"YES"<<"\n";
            cout<<i+1<<"\n";
            return;
        }
    }

    cout<<"NO"<<"\n";
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