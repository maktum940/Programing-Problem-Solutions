#include<stdio.h>
int main()
{
    int a, b;
    double l;
    scanf("%d %d", &a, &b);
    l = (a*b)/12.00;
    printf("%.3lf\n", l);
    return 0;
}
