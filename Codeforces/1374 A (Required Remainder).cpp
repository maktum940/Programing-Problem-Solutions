#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int x, y, n, i;
        scanf("%d %d %d", &x, &y, &n);
        i = n;
        for(;n > 0; n--){
            if(n % x == y){
                printf("%d\n", n);
                break;
            }
            else if(n == 1){
                printf("0\n");
            }
        }
    }
    return 0;
}
