#include<stdio.h>
int main()
{
    int product_code_1, product_unite_1, product_code_2, product_unite_2;
    double product_price_1, product_price_2, totul_price;

    scanf("%d %d %lf", &product_code_1, &product_unite_1, &product_price_1);
    scanf("%d %d %lf", &product_code_2, &product_unite_2, &product_price_2);
    totul_price = (product_unite_1*product_price_1)+(product_unite_2*product_price_2);

    printf("VALOR A PAGAR: R$ %.2lf\n", totul_price);

    return 0;

}
