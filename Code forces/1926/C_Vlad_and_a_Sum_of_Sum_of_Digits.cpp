/**
 	user 	: Arko7
    Solved  : 2024-02-19 20:46:18
**/

#include<bits/stdc++.h>
using namespace std;

#define fastIO cin.tie(0)->sync_with_stdio(0)

int T=1;

int sumOfDigits(int n) 
{
    int sum = 0;
    while (n > 0) 
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() 
{
        int n;
        cin >> n;
        
        int sum = 0;
        for (int i = 1; i <= n; ++i) 
        {
            sum += sumOfDigits(i);
        }
        
        cout<<sum;
}

int main() 
{
	fastIO;

	cin>>T;

	for(int t=1;t<=T;t++) 
	{
		//cout<<"Case #"<<t<<": ";
		solve();
        cout<<endl;
	}
	
	return 0;
}