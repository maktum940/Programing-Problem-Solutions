#include <stdio.h>

int main()
{
	int t, a, b;
	scanf("%d", &t);
	int j = 1, x = 0;
	int y = t;
	
	while(scanf("%d %d", &a, &b) == 2){
		
		if(a >= 0 && b >= 0 && a <= 10 && b <= 10){
			printf("Case %d: ", j++);
			printf("%d\n", a+b);
			x++;
		}
		if(x == y){
			break;
		}
	}
	return 0;
}
