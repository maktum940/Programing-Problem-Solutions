#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    set<int> s;
    set<int>::iterator it = s.begin();

    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        s.insert(arr[i]);
    }
    int unique_len = s.size();
    int res = n-unique_len;

    if(res%2 == 0) cout << unique_len << endl;
    else{
        unique_len -= 1;
        cout << unique_len << endl;
    }

}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
