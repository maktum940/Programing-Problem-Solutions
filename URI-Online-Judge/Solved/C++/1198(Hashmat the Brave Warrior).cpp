#include <stdio.h>
#include <math.h>

int main()
{
    long long int a, b, x, y;
    while(scanf("%lld %lld", &a, &b) == 2){
        x = fmin(a, b);
        y = fmax(a, b);
        printf("%lld\n", y-x);
    }
    return 0;
}
