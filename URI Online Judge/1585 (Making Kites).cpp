#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d cm2\n", (a*b)/2);
    }
    return 0;
}
