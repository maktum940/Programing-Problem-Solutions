#include <stdio.h>
#include <math.h>

int solve(int a, int b)
{
    int res = fmin(fmax(a*2, b), fmax(a, b*2));
    return res*res;
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b, res;
        scanf("%d%d", &a, &b);
        printf("%d\n", solve(a, b));
    }
    return 0;
}
