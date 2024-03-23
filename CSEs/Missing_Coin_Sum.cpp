/**
 	user 	:  ARKO7
    Solved  : 2024-02-22 22:40:16
**/

#include<bits/stdc++.h>
using namespace std;
#define fastIO cin.tie(0)->sync_with_stdio(0)

int T=1;

void solve() 
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    long long ans=1;
    for(int i=0;i<n;i++)
    {
        if(v[i]<=ans)
        {
            ans+=v[i];
        }

        else
        {
            break;
        }
    }

    cout<<ans;
}

int main() 
{
	fastIO;


	for(int t=1;t<=T;t++) 
	{
		//cout<<"Case #"<<t<<": ";
		solve();
        cout<<endl;
	}
	
	return 0;
}