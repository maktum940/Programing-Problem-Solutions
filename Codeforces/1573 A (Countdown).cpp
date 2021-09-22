#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    string s;
    int res = 0, swp = 0, ara;

    cin >> n >> s;

    for(int i = 0; i < n;i++){

        ara = (int)s[i]-48;
        res = res + ara;
        if(ara != 0) swp++;
    }

    res = swp+res;
    if(ara != 0) res--;
    cout << res << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
