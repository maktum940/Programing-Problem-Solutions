#include <stdio.h>

int main()
{
	double s;
	scanf("%lf", &s);
	char c = '%';
	
	if(s >= 0 && s <= 400.00){
		double a = s*0.15;
		s = s+a;
		printf("Novo salario: %0.2lf\n", s);
		printf("Reajuste ganho: %0.2lf\n", a);
		printf("Em percentual: 15 %c", c);
	}
	else if(s >= 400.01 && s <= 800.00){
		double a = s*0.12;
		s = s+a;
		printf("Novo salario: %0.2lf\n", s);
		printf("Reajuste ganho: %0.2lf\n", a);
		printf("Em percentual: 12 %c", c);
	}
	else if(s >= 800.01 && s <= 1200.00){
		double a = s*0.10;
		s = s+a;
		printf("Novo salario: %0.2lf\n", s);
		printf("Reajuste ganho: %0.2lf\n", a);
		printf("Em percentual: 10 %c", c);
	}
	else if(s >= 1200.01 && s <= 2000.00){
		double a = s*0.07;
		s = s+a;
		printf("Novo salario: %0.2lf\n", s);
		printf("Reajuste ganho: %0.2lf\n", a);
		printf("Em percentual: 7 %c", c);
	}
	else{
		double a = s*0.04;
		s = s+a;
		printf("Novo salario: %0.2lf\n", s);
		printf("Reajuste ganho: %0.2lf\n", a);
		printf("Em percentual: 4 %c", c);
	}
	return 0;
}
