#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1, y1, x2, y2;

    while(1==1){
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) break;
        else{
            int x, y, res;
            x = abs(x1-x2);
            y = abs(y1-y2);

            if(x == y || x == 0 || y == 0) res = 1;
            else{
                res = 2;
            }

            cout << min(res, x+y) << endl;
        }
    }
}
