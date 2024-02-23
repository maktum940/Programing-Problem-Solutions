#include<stdio.h>
int main()
{
    int n, x, i, counter[2001];

    for(i = 0; i <= 2000; i++){
        counter[i] = 0;
    }

    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        counter[x]++;
    }
    for(i = 0; i <= 2000; i++){
        if(counter[i] > 0){
            printf("%d aparece %d vez(es)\n", i, counter[i]);
        }
    }
    return 0;
}
