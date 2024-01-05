#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];


    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res = 0;

    for(int j = 1; j < n; j++){
        if(arr[j-1] > arr[j]){
            res = max(res, arr[j-1]);
        }
    }

    cout << res << endl;
}

int main(){
    int t;

    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
