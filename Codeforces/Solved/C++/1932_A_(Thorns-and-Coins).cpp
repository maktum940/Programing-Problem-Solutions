#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc;

    while (tc--)
    {
        int len, count = 0, res = 0;
        cin >> len;

        char str[len];

        for(int i = 0; i < len; i++){
            cin >> str[i];
        }

        for(int i = 0; i < len; i++){
            if(str[i] == '@') count++;
            else if(str[i] == '*' && str[i+1] == '*') break;
        }
        cout << count << endl;
    }
    
}