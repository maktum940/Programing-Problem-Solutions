#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a%7 == 0 || a %4 == 0 || a%47 == 0 || a%74 == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

/////////////////...1907...A...
#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;
    
    int row = s[1]-'0';
    char column = s[0];
    
    for(int i = 1; i <=8; i++){
        if(i == row) continue;
        
        char res[2] = {s[0], i+'0'};
        cout << res[0] << res[1] << endl;
    }
    for(int i = 0; i < 8; i++){
        char a = 'a'+i;
        if(a == column) continue;
        
        cout << a << 5 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
