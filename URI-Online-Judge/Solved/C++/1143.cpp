#include <stdio.h>

int main()
{
	int t, x, y;
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		x = i*i;
		y = i*i*i;
		printf("%d %d %d\n", i, x, y);
	}
	return 0;
}
