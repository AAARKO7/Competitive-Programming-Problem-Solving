/**
 	user 	: Arko7
 	problem : B. Following the String
    Solved  : 
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
		int x;
		cin>>x;
		v.push_back(x);
	}

}

int main() 
{
	fastIO;

	cin>>T;

	for(int t=1;t<=T;t++) 
	{
		//cout<<"Case #"<<t<<": ";
		solve();
        cout<<endl;
	}
	
	return 0;
}