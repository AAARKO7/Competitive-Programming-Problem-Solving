/**
 *	author 	: Arko7
 *	problem : Chewbaсca and Number
 *	created : 2024-01-13 22:33:16
**/

#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define double long double


#define vi vector<int>
#define pi vector<pair<int,int> > 
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


int T=1;

void solve() 
{
    string s;
    cin>>s;

    for(int i=0;i<(int)s.length();i++)
    {   
        if(s[i]>'4')
        {
            if(i==0 && s[i]=='9')
            {
                continue;
            }
            
            s[i]=('9'-s[i]) +'0';
        } 
    }

    cout<<s;
}

int main() 
{
	fastIO;

	// cin>>T;

	for(int t=1;t<=T;t++) 
	{
		// cout << "Case #" << t << ": ";
		solve();
        cout<<endl;
	}
	
	return 0;
}