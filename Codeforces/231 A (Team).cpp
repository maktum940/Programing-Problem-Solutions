#include <stdio.h>

int main()
{
    int t, count = 0;
    scanf("%d", &t);
    while(t--){
        int totall = 0, a, n = 3;
        while(n--){
            scanf("%d", &a);
            totall = totall + a;
        }
        if(totall > 1) count++;
    }
    printf("%d", count);
}
