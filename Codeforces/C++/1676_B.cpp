#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, sum = 0;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int com = arr[0];

    for(int i = 1; i < n; i++){
        sum = sum+(arr[i]-com);
    }
    cout << sum << endl;

}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
