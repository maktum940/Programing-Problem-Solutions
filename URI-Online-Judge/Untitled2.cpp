#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c;
	double res1, res2, res, x;
	
	scanf("%f%f%f", &a, &b, &c);
	res = (b*b)-(4*a*c);
	if(a == 0 || res < 0){
		printf("Impossivel calcular");
	}
	else{
		x = sqrt(res);
		res1 = (-b+x)/(a+a);
		res2 = (-b-x)/(a+a);
		printf("R1 = %0.5lf\n", res1);
		printf("R2 = %0.5lf\n", res2);
	}
	return 0;
}
