#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;

    int row = s[1]-'0';
    char column = s[0];

    for(int i = 0; i < 8; i++){
        char a = 'a'+i;
        if(a == column) continue;

        cout << a << row << " ";
    }
    for(int i = 1; i <=8; i++){
        if(i == row) continue;

        char res[2] = {s[0], i+'0'};
        cout << res[0] << res[1] << " ";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
	cout << endl;
    }

    return 0;
}
