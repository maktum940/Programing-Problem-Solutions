#include <bits/stdc++.h>

using namespace std;

void solve(){
    int A, B;
    cin >> A >> B;
    if(A == 0) cout << "1" << endl;
    else{
        cout << A+(2*B)+1 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
