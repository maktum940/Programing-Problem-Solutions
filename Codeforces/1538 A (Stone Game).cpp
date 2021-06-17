#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}

void solve(){
    int n, min1 = 2147483647, max1 = 0, min_in, max_in, res1, res2, res3, res4;
    vector<int> vec;
    cin >> n;

    for(int i = 0; i < n; i++){
        int p;
        cin >> p;

        vec.push_back(p);
        if(p > max1){
            max1 = p;
            max_in = i+1;
        }
        if(p < min1){
            min1 = p;
            min_in = i+1;
        }
    }
    res1 = max(min_in, max_in);
    res2 = max(n-min_in+1, n-max_in+1);

    res3 = n-max_in+min_in+1;
    res4 = n-min_in+max_in+1;

    cout << min({res1, res2, res3, res4},comp) << endl;
    /*if(res1 < res2){
        if(res1 < res3){
            cout << res1 << endl;
        }
        else{
            cout << res3 << endl;
        }
    }
    else{
        if(res2 < res3){
            cout << res2 << endl;
        }
        else{
            cout << res3 << endl;
        }
    }*/
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
