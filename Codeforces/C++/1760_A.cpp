#include<bits/stdc++.h>

using namespace std;

void solve(){
    int arr[3];
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    sort(arr, arr+3);
    cout << arr[1] << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
