#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c, x, y;

    cin >> a >> b >> c >> x >> y;

    if((a-x)<0) {
        c = c+(a-x);
    }
    if((b-y)<0) {
        c = c+(b-y);
    }

    if(c<0) {
        cout <<"NO" << endl;
        return;
    }
    else{
        cout << "YES" << endl;
        return;
    }
}

int main(){
    int test_case;
    cin >> test_case;

    while(test_case--){
        solve();
    }
}
