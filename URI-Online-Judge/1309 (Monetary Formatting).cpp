#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, i, count = 0, c, d;
    char dollers[10000], cents[3], res[1000000];
    while(scanf("%s%s", dollers, cents) == 2){
        res[0] = '$';
        a = strlen(dollers);
        c = (a/3)+a;
        b = strlen(cents);
        a = (a/3)+a+1;
        d = a+2;
        res[a] = '.';
        if(b == 1){
            res[a+1] = '0';
            res[a+1] = cents[0];
        }
        else{
            res[a+1] = cents[0];
            res[a+1] = cents[1];
        }
        a = a-1;
        for(i = a; i >= 1; i--){
            res[i] = dollers[c--];
            ++count;
            if(count == 3){
                res[--a] = ',';
                a = a-1;
                count = 0;
            }
        }
        for(i = 0; i <= d; i++){
            printf("%c", res[i]);
        }
        printf("\n");
    }
    return 0;
}
