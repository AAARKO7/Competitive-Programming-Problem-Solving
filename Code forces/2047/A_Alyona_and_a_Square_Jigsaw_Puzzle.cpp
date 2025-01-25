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

    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum+=v[i];

        int r=sqrt(sum);
        if(r*r==sum && r%2!=0){
            count++;
        }

    }

    cout<<count<<"\n";
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