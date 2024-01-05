#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    if(n%2 != 0){
        cout << 3 << " " << 1 << " " << 2 << " ";
        for(int i = 5; i <= n; i--){
            cout << i << " " ;
            if(i%2 == 0){
                i += 4;
            }
        }
    }
    else{
        for(int i = 2; i <= n; i--){
            cout << i << " ";
            if(i%2 != 0){
                i += 4;
            }
        }
        cout << endl;
    }
}

int main(){
    int test;
    cin >> test;

    while(test--){
        solve();
    }
}
