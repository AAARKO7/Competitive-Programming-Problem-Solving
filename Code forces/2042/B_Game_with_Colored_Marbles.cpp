/*
    Solver: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(auto &x:v){
        cin>>x;
    }

    vector<int> freq(n+1, 0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    int count1=0;
    int count2=0;

    for(int i=0;i<=n;i++){
        if(freq[i]==1){
            count1++;
        }

        if(freq[i]){
            count2++;
        }
    }

    int ans=(count1 + 1)/2;
    ans*=2;
    int dup=count2 - count1;

    cout<<ans+dup<<"\n";
    
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