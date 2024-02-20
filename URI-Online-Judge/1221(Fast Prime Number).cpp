#include <stdio.h>

int main()
{
    int t, i;
    long long int nu;
    scanf("%d", &t);

    while(t--){
        scanf("%lld", &nu);
        if(nu%2 == 0 || nu%3 == 0 || nu%5 == 0 || nu%7 || nu%9 == 0 || nu%11 == 0 || nu%13 == 0){
            printf("Not Prime\n");
        }
        else{
            printf("Prime\n");
        }
    }
    return 0;
}
