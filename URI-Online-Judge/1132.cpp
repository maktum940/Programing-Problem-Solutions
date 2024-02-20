#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	int x = fmin(a, b);
	int y = fmax(a, b);
	
	int res = 0;
	for(; x <= y; x++){
		if(x%13 != 0){
			res = res + x;
		}
	}
	printf("%d\n", res);
	return 0;
}
