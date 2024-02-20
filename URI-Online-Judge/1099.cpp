#include <stdio.h>
#include <math.h>

int main()
{
	int t, a, b, x, y;
	scanf("%d", &t);
	
	while(t--){
		scanf("%d%d", &a, &b);
		x = fmin(a, b);
		y = fmax(a, b);
		
		int j = 0;
		x = x+1;
			
		for(; x < y; x++){
			if(x%2 != 0){
				j = x+j;
			}
		}
		printf("%d\n", j);
	}
	return 0;
}
