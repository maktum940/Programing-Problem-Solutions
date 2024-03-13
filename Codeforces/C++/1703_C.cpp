#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve(){
    int a, temp = 0;

    cin >> a;

    int arr[a];
    int first[a];
    int as = a;

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    while(a--){
        int b, U = 0, res, temp2 = 0;
        string s;

        cin >> b;
        cin >> s;

        for(int i = 0; i < b; i++){
            if(s[i] == 'U') U++;
        }
        int D = b-U;

        temp2 = arr[temp] + D - U;
        while(temp2 < 0 || temp2 > 9){
            if(temp2 < 0) temp2 += 10;
            else temp2 -= 10;
        }

        first[temp] = temp2;
        temp++;
    }
    for(int i = 0; i < as; i++){
        cout << first[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
