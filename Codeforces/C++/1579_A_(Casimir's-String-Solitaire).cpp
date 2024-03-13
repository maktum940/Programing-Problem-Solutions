#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a = 0, b = 0;
    string s;
    cin >> s;

    if(s.size()%2 != 0){
        cout << "NO" << endl;
    }
    else{
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A' || s[i] == 'C') a++;
            else b++;
        }
        if(a == b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
        
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}