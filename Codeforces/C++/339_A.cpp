#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int len = s.length();

    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){

            if(s[i] == '+' || s[j] == '+') continue;

            else{
                int a = s[i]-48;
                int b = s[j]-48;
                if(a > b){
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
    }

    cout << s << endl;

    return 0;
}
