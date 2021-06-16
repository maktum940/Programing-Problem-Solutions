#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> v;
    stringstream ss(str);

    int n;
    char skip;
    while(ss) {
        if(ss.peek() != ','){
            if(ss >> n){
                v.push_back(n);
            }
        }else{
            ss >> skip;
        }
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

