#include <stdio.h>

int main()
{
	int a, b, c, max, min;
	
	scanf("%d%d%d", &a, &b, &c);
	
	if(a < b && a < c){
		min = a;
	}
	else if(b < a && b < c){
		min = b;
	}
	else if(c < a && c < b){
		min = c;
	}
	
	if(a > b && a > c){
		max = a;
	}
	else if(b > a && b > c){
		max = b;
	}
	else if(c > a && c > b){
		max = c;
	}
	
	printf("%d\n", min);
	
	if(a < max && a > min){
		printf("%d\n", a);
	}
	else if(b < max && b > min){
		printf("%d\n", b);
	}
	else if(c < max && c > min){
		printf("%d\n", c);
	}
	printf("%d\n", max);
	
	printf("\n");
		
	printf("%d\n%d\n%d\n", a, b, c);
	return 0;
}
