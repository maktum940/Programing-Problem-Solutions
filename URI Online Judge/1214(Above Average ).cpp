#include <stdio.h>

int main()
{
    int t, t2, i;
    double sum, c;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &t2);
        sum = 0;
        c = 0;
        double ara[100];
        for(i = 0; i < t2; i++){
            scanf("%d", &ara[i]);
            sum = sum+ara[i];
        }
        sum = sum/t2;
        for(i = 0; i < t2; i++){
            if(ara[i] > sum)c++;
        }
        printf("%.3lf%\n", c/t2*100.000);
    }
    return 0;
}
