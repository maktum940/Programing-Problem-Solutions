#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, a, j, q;
    char str[50];
    int len;
    while(1){
        scanf("%s", str);
        len = strlen(str);
        for(q = 0, j = 39; j <= 64; j++, q++){
            j = 65 + q;
        }
        for(i = 0; i < len; i++){
            str[i] = str[i] - 13;
        }
        printf("%s\n", str);
    }

}
