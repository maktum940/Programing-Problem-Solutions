#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

void solve(){
    string s;

    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    if(s == "YES") cout << "YES" << endl;
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
 
