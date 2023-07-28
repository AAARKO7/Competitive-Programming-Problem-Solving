/*
    Solver: Arko7
    Date: 3 April,2023

*/

/*Odd Divisor(1475A)*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;

    cin>>n;

    if(n&(n-1)) 
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
   int t;
   cin>>t;

   while(t--)
   {
    solve();
   }

   return 0;
}

//comments on the problem:

/*bitwise AND operator "&" is used to perform a bitwise AND 
operation on two integer values. It operates on each bit of 
the two values and returns a new value where each bit is 
set to 1 only if the corresponding bits of both operands are 1, otherwise it sets the bit to 0.*/
