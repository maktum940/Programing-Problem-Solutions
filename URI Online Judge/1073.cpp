#include <stdio.h>
#include <math.h>

int main()
{
	int a, i, q, res;
	scanf("%d", &a);
	q = 2; 
	for(i = 2; i <= a; i = i + 2){
		res = pow(i, 2);
		printf("%d^2 = %d\n", i, res);
	}
	return 0;
}
