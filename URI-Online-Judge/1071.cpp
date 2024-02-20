#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, a, b;
	scanf("%d%d", &x, &y);
	
	a = fmin(x, y);
	b = fmax(x, y);
	
	int j = 0;
	a = a+1;
	
	for(; a < b; a++){
		if(a%2 != 0){
		j = a+j;
		}
	}
	printf("%d\n", j);
	
	return 0;
}
