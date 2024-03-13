#include <stdio.h>

void solve(){
    int n, i, res = 0;
    scanf("%d", &n);

    for(i = 0; i < 2*n; i++){
        int a;
        scanf("%d", &a);

        if(a%2 != 0) res++;
    }
    if(res == n) printf("Yes\n");
    else printf("No\n");
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        solve();
    }
}
