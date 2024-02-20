#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    long long int total = 0;
    for(int i = 1; i <= 9; i++){
        long long int x = 0;
        for(int y = 1; y <= 10; y++){
            x = x*10+i;
            if(x <= n) total++;
        }
    }
    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
