#include <iostream>
#include <vector>


using namespace std;

int main() {

    int n, q, a, k;

    cin >> n >> q;

    vector<vector <int> > stuff;

    for(int i = 0; i < n; i++){
        vector<int> temp;
        cin >> a;
        for(int j = 0; j < a; j++){
            cin >> k;
            temp.push_back(k);
        }
        stuff.push_back(temp);
    }
    int x, y;
    for(int i = 0; i < q; i++){
        cin >> x >> y;
        cout << stuff[x][y] << endl;
    }
    return 0;
}

