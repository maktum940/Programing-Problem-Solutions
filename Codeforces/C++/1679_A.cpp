#include<bits/stdc++.h>

using namespace std;

void solve(){
    long long int tires, minimum = 1, maximum = 1;

    cin >> tires;

    if(tires % 2 != 0 || tires < 4){
        cout << "-1" << endl;
    }
    else{
        minimum = tires/6;
        maximum = tires/4;
        if(tires % 6 == 4 || tires % 6 == 2) minimum += 1;
        if(minimum == 0) minimum = 1;
        if(maximum == 0) maximum = 1;

        cout << minimum << " " << maximum << endl;

    }
}

int main(){
    int test;
    cin >> test;

    while(test--){
        solve();
    }

    return 0;
}
