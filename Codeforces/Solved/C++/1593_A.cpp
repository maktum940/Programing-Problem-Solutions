#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c, res1, res2, res3;
    cin >> a >> b >> c;

    res1 = max(b, c)-a+1;
    res2 = max(a, c)-b+1;
    res3 = max(a, b)-c+1;

    if(res1 < 0) res1 = 0;
    if(res2 < 0) res2 = 0;
    if(res3 < 0) res3 = 0;
    cout << res1 << " " << res2 << " " << res3 << endl;
}

int main(){
    int t;
    cin >>t;
    while(t--){
        solve();
    }
}
