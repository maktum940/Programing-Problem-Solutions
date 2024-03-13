#include<bits/stdc++.h>

using namespace std;

void solve(){
    unsigned int res = 1;
    int a, temp = INT_MAX;
    cin >> a;

    int arr[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    sort(arr, arr+a);
    arr[0]++;

    for(int i = 0; i < a; i++){
	res = res*arr[i];
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
