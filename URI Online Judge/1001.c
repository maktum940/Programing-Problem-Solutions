#include <stdio.h>
int main()
{
    int A, B, X, t;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &A, &B);
        X = A + B;
        printf("x = %d\n", X);
    }
    return 0;
}
