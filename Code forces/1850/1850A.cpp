/*
    Solver: Arko7
    Date: 27 July,2023

*/

/*To My Critics(1850A)*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;

    cin>>a>>b>>c;

    if(a+b>=10 || a+c>=10 || c+b>=10)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }
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