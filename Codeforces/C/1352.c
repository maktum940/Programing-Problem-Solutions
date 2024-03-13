#include<stdio.h>
int main()
{
    int x, t, count = 0;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        if(x/100000 > 0){
            count++;
        }
        x = x%100000;
        if(x/10000 > 0){
            count++;
        }
        x = x%10000;

        if(x/1000 > 0){
            count++;
        }
        x = x%1000;

        if(x/100 > 0){
            count++;
        }
        x = x%100;

        if(x/10 > 0){
            count++;
        }
        x = x%10;

        if(x > 0){
            count++;
        }
        printf("count =%d\n", count);
    }

    return 0;
}
