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

    string a,b;
    cin>>a>>b;

    int ans=0,x=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            if(a[i]=='1' && b[i]=='1'){
                ans++;
            }

            else if(a[i]=='0' && b[i]=='0'){
                x++;
            }
        }
    }

    int flag=n-ans;

    if(x==n){
        cout<<"NO"<<"\n";
    }
    else if(ans!=0 && ans%2!=0){
        cout<<"YES"<<"\n";
    }

    else{
        if(ans!=0 && ans%2==0){
            if(flag>0){
                cout<<"YES"<<"\n";
            }

            else{
                cout<<"NO"<<"\n";
            }
        }
    }
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