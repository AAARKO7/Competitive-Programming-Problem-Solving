/*
    Solver: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    
    vector<long long> a(n);

    long long sum=0,sume=0,sumo=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(i%2==0){
            sume+=a[i];
        }
        else{
            sumo+=a[i];
        }
        sum+=a[i];
    }

    if(sum % n == 0){
        long long o=(n+1)/2;
        long long e=n-o;

       long long avg=sum/n;


        if(sume==o*avg && sumo==e*avg){
            cout<<"YES"<<"\n";
            return;
        }
    }

    cout<<"NO"<<"\n";
    
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