/*
    Solver: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;

    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    int curlength=0;
    int count=0;

    for(int i=0;i<n;i++){
        if(curlength+s[i].length()<=m){
            curlength+=s[i].length();
            count++;
        }
        else{
            break;
        }
    }

    cout<<count<<"\n";
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