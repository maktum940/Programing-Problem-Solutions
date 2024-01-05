#include<bits/stdc++.h>

using namespace std;

void solve(){
    vector<int> vec;
    int n, sum = 0, res = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int p;
        cin >> p;

        vec.push_back(p);
        sum = sum+p;
    }
    if(sum%n != 0) cout << -1 << endl;
    else{
        int mid = sum/n;

        for(int i = 0; i < n; i++){
            if(mid < vec[i]) res++;
        }
        cout << res << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
