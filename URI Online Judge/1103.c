#include <stdio.h>
int main()
{
    int h1, m1, h2, m2, t1, t2, s;

    while(1){
        scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
        t1 = (h1*60)+m1;
        t2 = (h2*60)+m2;

        if(h1 ==0 && h2 == 0 && m1 == 0 && m2 == 0){
            break;
        }

        if (t1 < t2){
            s = t2-t1;
        }
        if (t1 > t2){
            s = (60*24)+(t2 - t1);
        }
            printf("%d\n", s);
    }
    return 0;
}
