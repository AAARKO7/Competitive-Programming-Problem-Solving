/*Twins(160A)*/

#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;

    cin >> n; 

    int a[n];
    int sum=0;

    //input
    for(int i=0;i<n;i++) 
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a , a+n); //sorting

    sum = sum/2;

    int ans=0; // taken coins sum
    int count=0; // coin counter

    for(int i=n-1;i>=0;i--) 
    {
        ans += a[i];
        count++;
        if(ans>sum)
        {
             break;
        }
    }
    cout<<count<<endl;
}

int main()
{
    int t = 1;
   // cin >> t;

    while(t--) 
    {   
        solve();
    }

    return 0;
}
