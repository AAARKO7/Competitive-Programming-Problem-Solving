/*
    Solver: Arko7
    Date: 2024-07-15 14:11:02

*/

/*Angry Monk*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;

    vector<int>v(k);
    for(auto &x:v) cin>>x;

    int m=-1;

    for(int i=0;i<k;i++){

        m=max(m,v[i]);
    }

    cout<<2*(n - m)-k+1<<"\n";
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