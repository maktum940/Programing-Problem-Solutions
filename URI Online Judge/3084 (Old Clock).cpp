#include<iostream>

using namespace std;

int main()
{
    while(1){
        int h, m;
        cin >> h >> m;

        if(h == 0 && m == 0){
            cout << "00:00" << endl;
            break;
        }
        else{
            int rh, rm;
            rh = h/30;
            rm = m/6;
            if(rh > 9){
                cout << rh << ":";
            }
            else{
                cout << "0" << rh << ":";
            }
            if(rm > 9){
                cout << rm << endl;
            }
            else{
                cout << "0" << rm << endl;
            }
        }
    }
}
