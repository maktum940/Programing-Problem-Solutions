#include <stdio.h>

int main()
{
	int i, j;
	int a = 7, b = 5;
	for(i = 1; i <= 9; i = i+2){
		for(j = a; j >= b; j--){
			printf("I=%d J=%d\n", i, j);
		}
		a = a+2;
		b = b+2;
	}
	return 0;
}
