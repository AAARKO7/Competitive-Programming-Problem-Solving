/*
    author: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long

void solve()
{
    string s;
    cin>>s;

    string s1,s2;
    s1=s[0];
    s2=s[2];
    int x=stoi(s1);
    int y=stoi(s2);

    if(x<y){
        cout<<s1<<"<"<<s2<<"\n";
    }

    if(x==y){
        cout<<s1<<"="<<s2<<"\n";
    }

    if(x>y){
        cout<<s1<<">"<<s2<<"\n";
    }

}

int32_t main() 
{
	fast_IO();
 
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