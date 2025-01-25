/*
    Solver: Arko7
    Date: 2024-07-10 18:00:50

*/

/*Creating Words*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;

    for(int i=0;i<3;i++)
    {
        if(i==0){
            swap(a[i],b[i]);
        }
        break;
    }

    cout<<a<<" "<<b<<"\n";
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