#include <stdio.h>
int main()
{
    while(1){
        int t, mary = 0, john = 0, a;
        scanf("%d", &t);

        if (t == 0){
            break;
        }

        while(t--){
            scanf("%d", &a);

            if(a == 0){
                mary++;
            }
            else{
                john++;
            }
        }

        printf("Mary won %d times and John won %d times\n", mary, john);
    }
    return 0;
}
