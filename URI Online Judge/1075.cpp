#include <stdio.h>

int main()
{
	int d;
	scanf("%d", &d);
	
	for(int i = 2; i < 10000; i = i+d){
		printf("%d\n", i);
	}
	return 0;
}
