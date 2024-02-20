#include <stdio.h>
#include <math.h>
int main()
{
    int t, a, b, c, result, i, f;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d%d%d", &a, &b, &c);
        f = pow(a, b);
        result = f % c;
        printf("Result = %d\n", result);
    }
    return 0;
}
