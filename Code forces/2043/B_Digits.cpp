#include <bits/stdc++.h>
using namespace std;

#define fast_IO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int factorial(int n) {
    int result=1;
    for (int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}

void solve(){
    int n,d;
    cin>>n>>d;

    int fact=factorial(n);

    vector<int> res;

    res.push_back(1);

    if((d*fact)%3==0){
        res.push_back(3);
    }

    if(d==5){
        res.push_back(5);
    }

    if((d*fact)%7==0){
        res.push_back(7);
    }

    if((d*fact)%9==0){
        res.push_back(9);
    }

    for (int i=0; i<res.size();i++){
        cout << res[i] << " ";
    }
    cout << "\n";
}

int main() {
    fast_IO();

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}
