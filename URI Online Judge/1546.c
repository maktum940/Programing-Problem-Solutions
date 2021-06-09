#include <stdio.h>
int main()
{
    while(1){
        int t, a;
        scanf("%d", &t);
    if(t == 0){
        break;
    }
    while(t--){
        scanf("%d", &a);
        if(a == 1){
            printf("Rolien\n");
        }
        else if (a == 2){
            printf("Naej\n");
        }
        else if (a == 3){
            printf("Elehcim\n");
        }
        else if (a == 4){
            printf("Odranoel\n");
        }
        }
    }
    return 0;
}
