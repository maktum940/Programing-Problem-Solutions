#include <stdio.h>

int main()
{
	int t, x = 0, y = 0, z = 0, a;
	
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		
		char b, C, R, S;
		scanf("%d %c", &a, &b);
		if(b == 67){
			x = x+a;
		}
		else if(b == 82){
			y = y+a;
		}
		else if(b == 83){
			z = z+a;
		}
	}
	int j = x+y+z;
	printf("Total: %d cobaias\n", j);
	printf("Total de coelhos: %d\n", x);
	printf("Total de ratos: %d\n", y);
	printf("Total de sapos: %d\n", z);
	double q = (x*100.00)/j;
	printf("Percentual de coelhos: %0.2lf %\n", q);
	q = (y*100.00)/j;
	printf("Percentual de ratos: %0.2lf %\n", q);
	q = (z*100.00)/j;
	printf("Percentual de sapos: %0.2lf %\n", q);
	
	return 0;
}





