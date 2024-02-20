#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d ano(s)\n", a/365);
    a = a%365;
    printf("%d mes(es)\n", a/30);
    a = a%30;
    printf("%d dia(s)\n", a);

    return 0;
}
