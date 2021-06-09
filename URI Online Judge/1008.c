#include<stdio.h>
int main()
{
    int a, b;
    double c, s;
    scanf("%d %d ", &a, &b);
    scanf("%lf", &c);
    printf("NUMBER = %d\n", a);
    s = (b*c);
    printf("SALARY = U$ %0.2lf\n", s);
    return 0;
}

