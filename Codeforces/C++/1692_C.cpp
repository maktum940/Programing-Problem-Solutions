#include<bits/stdc++.h>
#include<string.h>

using namespace std;

void solve(){
    string str_1, str_2, str_3, str_4;
    string str_5, str_6, str_7, str_8;
    string check = "#.#";
    int count = 1, res;

    cin >> str_1 >> str_2 >> str_3 >> str_4;
    cin >> str_5 >> str_6 >> str_7 >> str_8;

    size_t found = str_1.find(check);
    if(found < 8){
        cout << count+1 << " " << found+2 << endl;
        return;
    }
    count++;
    found = str_2.find(check);
    if(found < 8){
        cout << count+1 << " " << found+2 << endl;
        return;
    }
    count++;
    found = str_3.find(check);
    if(found < 8){
        cout << count+1 << " " << found+2 << endl;
        return;
    }
    count++;
    found = str_4.find(check);
    if(found < 8){
        cout << count+1 << " " << found+2 << endl;
        return;
    }
    count++;
    found = str_5.find(check);
    if(found < 8){
        cout << count+1 << " " << found+2 << endl;
        return;
    }
    count++;
    found = str_6.find(check);
    if(found < 8){
        cout << count+1 << " " << found+2 << endl;
        return;
    }

}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
