/*
    Solver: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;

    vector<int> v(n);

    for(auto &x: v){
        cin>>x;
    }

    string s;
    cin>>s;
    
    int rem=0;
    int mul=1;

    for(int i=0;i<v.size();++i){
        mul*=v[i];
    }

    for(int i=0;i<=v.size();++i){
        
        rem=mul%m;
        cout<<rem<<" ";
        if(s[i]=='L'){
            mul /= v[i];
            v.erase(v.begin());
        }

        else{
            mul /= v[v.size() - 1];
            v.pop_back();
        }

    }
    cout<<"\n";
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