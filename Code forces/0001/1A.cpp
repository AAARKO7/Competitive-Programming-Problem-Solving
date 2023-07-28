/*Theatre Square(1A)*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long long n,m,a;

    cin>>n>>m>>a;

   long long x = ceil((double)n/a) * ceil((double)m/a); /*ceil returns smallest integer value that is 
                                                        greater than or equal to the specified floating-point value.*/

    cout<<x<<endl;

    return 0;

}
