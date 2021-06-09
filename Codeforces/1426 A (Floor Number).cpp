#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int n, x, result, n2;
        scanf("%d%d", &n, &x);
        n2 = n + (x - 2);

        result = n2 / x;
        if(n < 3 && n <= x) printf("1\n");
        else if(result * x == n2) printf("%d\n", result);
        else if(result * x < n2) printf("%d\n", result+1);
    }
}
