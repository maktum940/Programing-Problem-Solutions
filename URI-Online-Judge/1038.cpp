#include <stdio.h>

int main()
{
	int x, y;
	double a, res;
	scanf("%d %d", &x, &y);

	
	if(x == 1){
		a = 4.00;
		res = y*a;
		printf("Total: R$ %0.2lf", res);
	}
	else if(x == 2){
		double a = 4.50;
		res = y*a;
		printf("Total: R$ %0.2lf", res);
	}
	else if(x == 3){
		double a = 5;
		res = y*a;
		printf("Total: R$ %0.2lf", res);
	}
	else if(x == 4){
		float a = 2.00;
		res = y*a;
		printf("Total: R$ %0.2lf", res);
	}
	else if(x == 5){
		double a = 1.50;
		res = y*a;
		printf("Total: R$ %0.2lf", res);
	}
	
	return 0;
}
