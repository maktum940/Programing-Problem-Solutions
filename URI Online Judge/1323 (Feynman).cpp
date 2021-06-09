#include <stdio.h>

int main()
{
    int a;
    while(scanf("%d", &a) == 1){
        if(a == 0){
            break;
        }
        else{
            int b, sum = 0;
            for(b = 1; b <= a; b++){
                sum = sum+(b*b);
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
