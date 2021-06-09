#include <stdio.h>
#include <math.h>

int main()
{
	int a,max, mid, min;
	int b[2];
	
	for(int i = 0; i < 3; i++){
		scanf("%d", &a);
		b[i] = a;
	}
	
	min = fmin(b[0], b[1]);
	min = fmin(min, b[2]);
	
	max = fmax(b[0], b[1]);
	max = fmax(max, b[2]);

	
	if(b[0] < max && b[0] > min){
		mid = b[0];
	}
	else if(b[1] < max && b[1] > min){
		mid = b[1];
	}
	else if(b[2] < max && b[2] > min){
		mid = b[2];
	}
	printf("%d\n", min);
	printf("%d\n", mid);
	printf("%d\n", max);
	
	printf("\n");
		
	for(int i = 0; i < 3; i++){
		printf("%d\n", b[i]);
	}
	return 0;
}
