#include<bits/stdc++.h>
#include<sstream>

using namespace std;

void solve(){
    string number;
    cin >> number;
    int res1 = 0, res2 = 0, num = 0;

    stringstream s1, s2, s3, s4, s5, s6;

    s1 << number[0];
    s1 >> num;
    res1 = res1+num;

    s2 << number[1];
    s2 >> num;
    res1 = res1+num;

    s3 << number[2];
    s3 >> num;
    res1 = res1+num;

    s4 << number[3];
    s4 >> num;
    res2 = res2+num;

    s5 << number[4];
    s5 >> num;
    res2 = res2+num;

    s6 << number[5];
    s6 >> num;
    res2 = res2+num;

    if(res1 == res2) cout << "YES" << endl;
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
