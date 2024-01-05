#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    if(n < 2020) cout << "NO" << endl;
    else{
        if(n%2020 == 0 || n%2021 == 0){
            cout << "YES" << endl;
        }
        else {
            int tem = (n-(n%2020))/2020;
            if(n%2020 <= tem){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
