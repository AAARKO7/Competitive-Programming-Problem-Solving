/*
    Solver:Arko7
    Date:

*/

/**/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> a(n),d(n);

    for(int i=0;i<n;i++){
        cin>>a[i]>>d[i];
    }

    sort(a.begin(),a.end());
    sort(d.begin(),d.end());

    int i=0,j=0;
    int current=0,maxx=0;

    while (i<n && j<n){
        
        if (a[i]<d[j]){
            current++;
            maxx=max(maxx,current);
            i++;
        } 
        else{
            current--;
            j++;
        }
    }
    cout<<maxx<<"\n";    
}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	/*Test case*/
	int t=1;
	// cin>>t;
	for(int i=1;i<=t;i++) 
    {
		//cout<<"case #"<<i<<": ";
		solve();
	}
 
	return 0;
}