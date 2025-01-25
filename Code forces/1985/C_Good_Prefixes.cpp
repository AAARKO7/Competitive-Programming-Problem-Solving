/*
    Solver: Arko7
    Date:2024-07-10 17:14:21

*/

/*Good Prefixes*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long sum=0;
    int x=0;
    int ans=0;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];

        x=max(a[i],x);

        if(sum-x==x)
        {         
            ans++;
        }
    }

    cout<<ans<<"\n";
}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
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