#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    int res = floor(n/10);
    if(n%10 == 9) res++;
    cout << res << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
