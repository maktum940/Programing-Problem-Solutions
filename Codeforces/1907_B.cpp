#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve(){
    string s;
    string res;
    cin >> s;
    
    int len = s.size();
    
    for(int i = 0; i = s.size();i++){
        if(s[i] == 'b'){
            // for(int j = len-1; j > 0; j--){
            //     if(123 > res[j] && res[j] > 96){
            //         s.erase(s.begin() + j);
            //         break;
            //     }
            // }
        }
        else if(s[i] == 'B'){
            // for(int j = len-1; j > 0; j--){
            //     if(91 > res[j] && res[j] > 64){
            //         s.erase(s.begin() + j);
            //         break;
            //     }
            // }
        }
        else{
            res = res+s[i];
        }
    }
    
    for(int i = 0; i < res.length(); i++){
        cout << res[0];
    }
    cout << endl;
}

int main() {
    int t;
    
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}