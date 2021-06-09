#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, x, y;
	while(1){
		scanf("%d %d", &a, &b);
		y = fmin(a, b);
		x = fmax(a, b);
		
		if (x <= 0 || y <= 0){
			break;
		}
		int j;
		for(j = 0; y <= x; y++){
			printf("%d ", y);
			j = j+y;
		}
		printf("Sum=%d\n", j);
	}
	return 0;
}
