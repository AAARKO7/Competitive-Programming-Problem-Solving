/*
    Solver:Arko7
    Date:

*/

/**/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;

    vector<int> a(n);
    vector<int> b(m);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    for(int i=0;i<m;i++){
        cin>>b[i];
    }

}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
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