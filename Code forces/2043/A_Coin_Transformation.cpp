#include<bits/stdc++.h>
using namespace std;

#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

void solve()
{
    int n;
    cin >> n;

    int result=1; 
    
    while(n>3){
        result*=2;  
        n/=4;       
    }

    cout<<result<<"\n";
}

int32_t main() 
{
    fast_IO();
 
    /* Test case */
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        solve();
    }
 
    return 0;
}
