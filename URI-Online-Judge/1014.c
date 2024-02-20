#include<stdio.h>
int main()
{
    int x;
    double y, a;
    scanf("%d %lf", &x, &y);
    a = x/y;
    printf("%.3lf km/l\n", a);
    return 0;
}
