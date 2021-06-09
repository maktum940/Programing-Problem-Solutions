#include <stdio.h>

int main()
{
	double n1, n2, n3, n4, ave, a;
	scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
	ave = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
	printf("Media: %0.1lf\n", ave);
	
	if(ave >= 7.0){
		printf("Aluno aprovado.\n");
	}
	else if(ave < 5.0){
		printf("Aluno reprovado.\n");
	}
	else if(ave >= 5.0 || ave <=6.9){
		printf("Aluno em exame.\n");
		scanf("%lf", &a);
		printf("Nota do exame: %0.1lf\n", a);
		ave = (ave + a)/2;
		if(ave >=5.0){
			printf("Aluno aprovado.\n");
			printf("Media final: %0.1lf\n", ave);
		}
		else if(ave <= 4.9){
			printf("Aluno reprovado.\n");
			printf("Media final: %0.1lf\n", ave);
		}
	}
	
	return 0;
}
