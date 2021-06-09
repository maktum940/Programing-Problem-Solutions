#include<stdio.h>
int main()
{
    int n, e, a, b, c, d, x, y, z, t;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d %d %d %d", &e, &a, &b, &c, &d);
        t = a+b;
        x = a-b;
        y = c-d;
        z = c+d;
        if(((e*x) <= z) && (y <= (e*t))){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
