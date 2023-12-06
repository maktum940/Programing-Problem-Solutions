#include<stdio.h>
int main()
{
    int n, e, a, b, c, d, x, y, z, t;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d %d %d %d", &e, &a, &b, &c, &d);
        t = a+b;
        x = a-b;
        y = c-d;
        z = c+d;
        if(((e*x) <= z) && (y <= (e*t))){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}

///////////...1907...B..//////
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
            for(int j = len-1; j > 0; j--){
                if(123 > res[j] && res[j] > 96){
                    s.erase(s.begin() + j);
                    break;
                }
            }
        }
        else if(s[i] == 'B'){
            for(int j = len-1; j > 0; j--){
                if(91 > res[j] && res[j] > 64){
                    s.erase(s.begin() + j);
                    break;
                }
            }
        }
        else{
            res = res+s[i];
        }
    }
    cout << len << endl;
}

int main() {
    int t;
    
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

