#include<bits/stdc++.h>

using namespace std;

bool isPerfectSquare(long long x) {
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

void solve(){
    int a;
    cin >> a;

    if(isPerfectSquare(a)){
        cout << sqrt(a) << " " << 0 << endl;
    }else{
        cout << -1 << endl;
    }

}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}