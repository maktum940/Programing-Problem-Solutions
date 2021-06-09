#include <stdio.h>

int main()
{
    int i, amount_gas, radius, count = 0;
    float volume;

    scanf("%d %d", &radius, &amount_gas);

    volume = (4/3.00)*(3.1415)*(radius*radius*radius);

    for(i = 1; ; i++){
        if(volume*i > amount_gas){
            printf("%d\n", --i);
            break;
        }
    }
    return 0;
}
