#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        char n[30];
        int len, count = 0, i;

        scanf("%s", n);


        len = strlen(n)-1;
        for(; len >= 1; len--){
            if(n[len] < 35){
                count++;
            }
        }
        //printf("%d\n", count);
        int number = atoi(n);
        //printf("%d\n", number);

        int res = number;
        for(i = 1; ; i++){
            int q = res - count;
            if(q <= 0) break;
            else {
                count = count * i;
                number = number * q;
            }
        }
        printf("%d\n", number);
    }

    return 0;
}
