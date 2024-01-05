#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x1, y1, x2, y2, x, y, res;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    res = abs(x1-x2)+abs(y1-y2);

    if(x1-x2 == 0 && x1 == x){
        if(y > min(y1, y2) && y < max(y1, y2)) res += 2;
    }
    else if(y1-y2 == 0 && y1 == y){
        if(x > min(x1, x2) && x < max(x1, x2)) res += 2;
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
