/*
    author: Arko7
*/

#include<bits/stdc++.h>
using namespace std;

#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

void solve()
{
    int x;
    cin>>x;


    x=x%33;

    string num=to_string(x);
    for (int i=0;i<num.size()-1; i++) {
        if (num[i]=='3' && num[i + 1]=='3') {
            cout<<"YES"<<"\n";
            return;
        }
    }


    if(x==0){
        cout<<"YES"<<"\n";
    } else{
        cout<<"NO"<<"\n";
    }
}

int32_t main() 
{
    fast_IO();
 
    // Test cases
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 
    return 0;
}
