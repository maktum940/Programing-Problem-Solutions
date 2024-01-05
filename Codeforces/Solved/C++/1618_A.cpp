#include <bits/stdc++.h>

using namespace std;

void solve(){
    int ara[7];

    for(int i = 0;i < 7;i++){
        cin >> ara[i];
    }

    cout << ara[0] << " " << ara[1] << " " << ara[6]-ara[0]-ara[1] << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
