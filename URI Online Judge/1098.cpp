#include <stdio.h>

int main()
{
	double i, j, a = 0.2;
	
	for(i = 0; i <= 2; i = i+0.2){
		for(j = 1; j >= 3; j = j++){
			j = j+a;
			printf("I=%0.1lf J=%0.1lf\n", i, j);
		}
		a = a+0.2;
	}
	return 0;
}
