/*
    author: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

void solve()
{
    int n;
    cin>>n;

    vector<int> a(n);

    for(auto &x:a){
        cin>>x;
    }

    int curn=n-2;
    int mul=0;

    int num1=0;
    int num2=0;
    sort(a.begin(),a.end());
    int i=0,j=n-1;
    while(i<j){
        int mul=a[i]*a[j];
        if (mul==curn) {
            num1=a[i];
            num2=a[j];
            break;
        }

        if(mul<curn){
            i++; 
        } 
        else{
            j--; 
        }
    }

    cout<<num1<<" "<<num2<<"\n";

}

int32_t main() 
{
	fast_IO();
 
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