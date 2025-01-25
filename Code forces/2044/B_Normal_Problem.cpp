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

    reverse(s.begin(),s.end());

    string b;
    for(char c: s){
        if(c=='p'){
            b+='q';
        }

        if(c=='q'){
            b+='p';
        }  

        if(c=='w'){
            b+='w';
        }    

    }

    cout<<b<<"\n";
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