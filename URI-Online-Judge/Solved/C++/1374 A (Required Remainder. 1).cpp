#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int x, y, n, z, a;
        scanf("%d%d%d", &x, &y, &n);
        z = n%x;
        if(z == y){
            printf("%d\n", n);
        }
        else if(z > y){
            n = n-(z-y);
            printf("%d\n", n);
        }
        else{
            a = (n/x)-1;
            printf("%d\n", (x*a)+y);
        }
    }
    return 0;
}
