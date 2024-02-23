#include <stdio.h>
int compare(int x, int y)
{
    int r, b, c;
    r = (9*x*x)+y*y;
    b = (2*x*x)+(25*y*y);
    c = (-100*x)+y*y*y;
    if(r > b && r > c){
        return 1;
    }
    if(b > r && b > c){
        return 2;
    }
    if(c > r && c > b){
        return 3;
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int x, y, res;
        scanf("%d%d", &x, &y);
        res = compare(x, y);
        if(res == 1){
            printf("Rafael ganhou\n");
        }
        if(res == 2){
            printf("Beto ganhou\n");
        }
        if(res == 3){
            printf("Carlos ganhou\n");
        }
    }
    return 0;
}
