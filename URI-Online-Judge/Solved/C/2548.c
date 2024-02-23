#include<stdio.h>
int main()
{
    int m = 0, n = 0, i = 0, result = 0;
    while(scanf("%d %d", &n, &m) != EOF){
    int value[n];
    int ara[m];
    for (i = 0;i < n; i++){
        scanf("%d", &value[i]);
    }
    for (i = 0; i < m; i++, n--){
        ara[i] = value[n-1];
    }
    int result = 0;
    for(i = 0; i < m; i++){
        result = ara[i]+result;
    }
    printf("%d\n", result);
    }
    return 0;
}
