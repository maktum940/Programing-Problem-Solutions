#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;

    while (tc--)
    {
        int len, sum = 0;
        bool have1 = false;

        cin >> len;
        int arr[len];

        for(int i = 0; i < len; i++){

            cin >> arr[i];

            sum = sum + arr[i];

            if(arr[i] % 3 == 1) have1 = true;
        }

        if(sum % 3 == 0) cout << 0 << endl;
        else if(sum % 3 == 2) cout << 1 << endl;
        else if(sum % 3 == 1) {
            if(have1) cout << 1 << endl;
            else cout << 2 << endl;
        }
        
    }

    return 0;

}