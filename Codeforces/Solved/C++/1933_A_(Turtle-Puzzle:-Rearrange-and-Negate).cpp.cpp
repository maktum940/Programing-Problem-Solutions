#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int tc;
    cin >> tc;
 
    while (tc--)
    {
        int len, res = 0;
        cin >> len;
 
        for(int i = 0; i < len; i++){
            int temp;
            cin >> temp;
            if(temp < 0){
                res = res + (temp*-1);
            }
            else{
                res = res + temp;
            }
        }
        cout << res << endl;
    }
 
    return 0;
 
}