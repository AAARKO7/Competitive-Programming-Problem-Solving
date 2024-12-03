/*
    Solver: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;

    vector<int> v(n);

    for(auto &x:v){
        cin>>x;
    }

    sort(v.rbegin(),v.rend());

    int sum=0;
    int count=0;
    int current=0;
    for(int i=0;i<n;i++){
        
        
        current+=v[i];

        if(current<=k){
            sum=current;
        }
        
        else{
            break;
        }
    }

    if(sum<k){
        count=k-sum;
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