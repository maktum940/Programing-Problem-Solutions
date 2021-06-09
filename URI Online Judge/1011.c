#include<stdio.h>
int main()
{
    double pi, r, volume;
    scanf("%lf", &r);
    pi = 3.14159;
    volume = (4/3.00)*pi*r*r*r;
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
