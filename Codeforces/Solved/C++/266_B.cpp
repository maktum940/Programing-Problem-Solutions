#include <bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    int len, change;
    string substr = "BG";
    int index = 0;

    cin >> len >> change;

    string s;
    cin >> s;

    while(change--){
        int index = 0;

        while ((index = s.find(substr, index)) != std::string::npos) {
            s[index] = 'G';
            s[index+1] = 'B';
            index += substr.length();
        }
    }

    cout << s << endl;

    return 0;
}
