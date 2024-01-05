#include<bits/stdc++.h>

using namespace std;

void solve(){
   string str;
   int count = 0;
   cin >> str;

   string temp = "abc";
   for(int i = 0; i < 3; i++){
       if(str[i] == temp[i]) count++;
   }
   if(count >= 1) cout << "YES" << endl;
   else cout << "NO" << endl;
}
int main(){
   int t;
   cin >> t;

   while(t--){
      solve();
   }
   return 0;
}
