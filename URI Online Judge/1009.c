#include<stdio.h>
int main()
{
    char first_name[50];
    double b, c, d;
    scanf("%s", &first_name);
    scanf("%lf %lf", &b, &c);
    d  = (c*.15)+b;
    printf("TOTAL = R$ %.2lf\n", d);
    return 0;
}
