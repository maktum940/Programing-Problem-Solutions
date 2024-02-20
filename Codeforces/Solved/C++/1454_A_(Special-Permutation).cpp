#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int num, i, j;
        cin >> num;

        int ara[num];
        if(num%2 == 0){
            for(i = 0, j = 2; i < num; i = i+2, j += 2){
                ara[i] = j;
            }
            for(i = 1, j = 1; i < num; i = i+2, j += 2){
                ara[i] = j;
            }
            for(i = 0; i < num; i++){
                cout << ara[i] << " ";
            }
            cout << endl;
        }
        else{
            for(i = 0, j = 2; i < num-3; i = i+2, j += 2){
                ara[i] = j;
            }
            for(i = 1, j = 1; i < num-3; i = i+2, j += 2){
                ara[i] = j;
            }
            ara[num-3] = num-1;
            ara[num-2] = num;
            ara[num-1] = num-2;
            for(i = 0; i < num; i++){
                cout << ara[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
