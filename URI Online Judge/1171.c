#include <stdio.h>
int main()
{

    int t, i, j, count = 0;
    scanf("%d", &t);
    int ara[t];
    for(i = 0; i < t; i++){
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < t; i++){
        for(j = 0; j < t; j++){
            if(ara[i] == ara[j]){
                count++;
            }
        }
        /*if(count > 0){
            printf("%d aparece %d vez(es)\n", ara[i], count);
        }*/

    }
    if(count > 0){
        printf("%d aparece %d vez(es)\n", ara[i], count);
	}
	
    return 0;
}
