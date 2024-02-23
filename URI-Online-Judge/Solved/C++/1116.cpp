#include <stdio.h>

int main()
{
	double a, b, t;
	scanf("%lf", &t);
	while(t--){
		scanf("%lf %lf", &a ,&b);
		if(b == 0){
			printf("divisao impossivel\n");
		}
		else if(a == 0){
			printf("0.0\n");
		}
		else{
			double res = a/b;
			printf("%0.1lf\n", res);
		}
	}
	return 0;
}
