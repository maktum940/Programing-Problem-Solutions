#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    bool f = false;
    cin >> n;

    int ara[n];
    for(int i = 0; i < n; i++){
        int p;

        cin >> p;
        if(p < 0) f = true;
    }
    if(f){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        cout << 101 << '\n';
        for(int i = 0; i <= 100; i++) cout << i << " ";
        cout <<'\n';
    }
}

int main()
{
    int cas;
    cin >> cas;

    while(cas--){
        solve();
    }
    return 0;
}
