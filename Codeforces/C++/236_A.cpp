#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    set<char> s;
    string name;

    cin >> name;

    int len = name.length();

    for(int i = 0; i < len; i++){
        s.insert(name[i]);
    }

    int str_len = s.size();
    if(str_len%2 == 0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }

    return 0;
}
