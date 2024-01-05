#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test-- > 0){
        int len, count = 0;
        cin >> len;
        char str[len];

        for(int i = 0; i < len; i++){
            cin >> str[i];
        }
        for(int i = len-1; i >= 0; i--){
            if(str[i] == ')') count++;
            else break;
        }
        if(len-count < count) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
