#include<stdio.h>
int main()
{
    double x_1, x_2, y_1, y_2, a;
    scanf("%lf %lf %lf %lf", &x_1, &y_1, &x_2, &y_2);
    a = sqrt((x_2 - x_1)*(x_2 - x_1)+(y_2 - y_1)*(y_2 - y_1));
    printf("%.4lf\n", a);
    return 0;
}
