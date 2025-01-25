/*
    Solver: Arko7
    Date: 2024-07-15 14:53:13

*/

/*Only Pluses*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;    

    for(int i=0;i<5;i++){
        
        int m=min({a,b,c});

        if(a==m){
            a+=1;
        }
        else if(b==m){
            b+=1;
        }
        else{
            c+=1;
        }
    }

    cout<<a*b*c<<"\n";
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