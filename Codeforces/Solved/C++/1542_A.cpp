#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, res = 0;
    cin >> n;

    for(int i = 0; i < 2*n; i++){
        int a;
        cin >> a;

        if(a%2 != 0) res++;
    }
    if(res == n) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
