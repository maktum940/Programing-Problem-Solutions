#include <stdio.h>
int main()
{
    int t, a, b, a1, b1;
    while(scanf("%d", &t) == 1){
        a1 = 0;
        b1 = 0;
        if(t == 0){
            break;
        }
        while(t--){
            scanf("%d%d", &a, &b);
            if (a > b){
                a1++;
            }
            else if(a < b){
                b1++;
            }
        }
        printf("%d %d\n", a1, b1);
    }
    return 0;
}
