#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	
	for (int i = 0; i < t; i++){
		double a, b, c, res;
		scanf("%lf%lf%lf", &a, &b, &c);
		
		res = ((a*2)+(b*3)+(c*5))/10;
		printf("%0.1lf\n", res);
	}
	return 0;
}
