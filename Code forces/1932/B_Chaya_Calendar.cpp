/*
    Solver:Arko7

*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);

    int cal=0;
    for(auto &x: v){
        cin>>x;

        cal=cal/x+1;
        cal*=x;
    }
    cout<<cal<<"\n";
}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	/*Test case*/
	// int t=1;
    int t;
	cin>>t;
	for(int i=1;i<=t;i++) 
    {
		//cout<<"case #"<<i<<": ";
		solve();
	}
 
	return 0;
}