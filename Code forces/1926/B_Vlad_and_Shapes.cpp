/*
    Solver: Arko7

*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<string> s(n);
    for(int i=0;i<n;i++) {
        cin>>s[i];
    }

    bool triangle=false;
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(s[i][j]=='1'){
                count++;
            }
        }
        if(count==1){
            triangle=true;
        }

        else if(count>1){
            break;
        }
    }

    reverse(s.begin(),s.end());

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(s[i][j]=='1'){
                count++;
            }
        }
        if(count==1){
            triangle=true;
        }

        else if(count>1){
            break;
        }
    }


    if(triangle){
        cout<<"TRIANGLE"<<"\n";
    }

    else{
        cout<<"SQUARE"<<"\n";
    }    
}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
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