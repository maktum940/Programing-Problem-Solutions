#include <stdio.h>

int main()
{
	double a, b, c, t;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	if(a+b > c && a+c > b && b+c > a){
		printf("Perimetro = %0.1lf\n", a+b+c);
	}
	else{
		t = ((a+b)*c)*0.5;
		printf("Area = %0.1lf\n", t);
	}
	return 0;
}
