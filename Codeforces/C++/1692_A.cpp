#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c, d;
    int res = 0;
    cin >> a >> b >> c >> d;

    if(a < b) res+=1;
    if(a < c) res+=1;
    if(a < d) res+=1;

    cout << res << endl;
}

int main(){
    int test;
    cin >> test;

    while (test--)
    {
        solve();
    }
    return 0;
}
