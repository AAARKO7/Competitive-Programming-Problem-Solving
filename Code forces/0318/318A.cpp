/*Even Odds(318A)*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long long n, k;
    cin >> n >> k;

    //number of odd and even
    long long odd,even;

    if(n%2==0) 
    {
        odd=n/2;
        //even=n/2;
    } 
    
    else 
    {
        odd=(n+1)/2;
        //even=(n-1)/2;
    }

    //the k-th number
    long long x;

    if(k<=odd)
    {
        x=2*k-1;
    } 
    
    else 
    {
        x=2*(k-odd);
    }

    cout<<x<<endl;

    return 0;
}
