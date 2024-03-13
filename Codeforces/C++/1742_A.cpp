#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c, num;
    cin >> a >> b >> c;

    int sum = a+b+c;

    if(a > b){
        if(a > c){
            num = a;
        }
        else{
            num = c;
        }
    }
    else{
        if(b > c){
            num = b;
        }
        else{
            num = c;
        }
    }
    if(sum-num == num) cout << "YES" << endl;
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
