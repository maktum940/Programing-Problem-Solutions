#include <stdio.h>

int main()
{
	double a, b;
	while(1){
		scanf("%lf", &a);
		if(a > 10 || a < 0){
			printf("nota invalida\n");
		}
		else{
			break;
		}
	}
	while(1){
		scanf("%lf", &b);
		if(b > 10 || b < 0){
			printf("nota invalida\n");
		}
		else{
			break;
		}
	}
	double res = (a+b)/2;
	printf("media = %0.2lf\n", res);
	
	return 0;
}
