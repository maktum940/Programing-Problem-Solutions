#include <stdio.h>
#include <string.h>

int main()
{
    int t, len1, len2, a, b, i;
    char nu1[100], nu2[100];
    scanf("%d", &t);

    while(t--){
        int count = 0;
        scanf("%s %s", nu1, nu2);
        len1 = strlen(nu1);
        len2 = strlen(nu2);
        a = len2-1;
        b = len1-1;

        if(len2 > len1){
            printf("nao encaixa\n");
        }
        else{
            for(i = a; i >= 0; i--, b--){
                if(nu2[i] == nu1[b])count++;
            }
            if(count == len2){
                printf("encaixa\n");
            }
            else{
                printf("nao encaixa\n");
            }
        }
    }
    return 0;
}
