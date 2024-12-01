/*
    Solver: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

const int MAX= 200007;

int final[MAX];

int SumofDigits(int n){
    
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void solve()
{
    int n;
    cin>>n;

    cout<<final[n]<<'\n';
}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    final[0]=0;
    for(int i=1;i<MAX;i++){
        final[i]=final[i - 1]+SumofDigits(i);
    }
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