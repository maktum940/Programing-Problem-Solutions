#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve(){
    string s;
    int res = 0, a;

    cin >> s;

    int n = stoi(s);

    for(int i = 0; i < s.size(); i++){
        a = n%10;
        n -= a;
        n /= 10;

        if(res < a) res = a;
    }
    cout << res << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
