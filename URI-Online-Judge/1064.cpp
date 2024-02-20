#include <stdio.h>

int main()
{
	double a, j = 0;
	int count = 0;
	for(int i = 0; i < 6; i++){
		scanf("%lf", &a);
		if (a > 0){
			j = a + j;
			count++;
		}
	}
	printf("%d valores positivos\n", count);
	printf("%0.1lf", j/count);
	
	return 0;
}
