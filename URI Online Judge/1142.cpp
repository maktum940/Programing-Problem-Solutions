#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	int a = 1;
	for(int i = 0; i < t; i++, a++){
		int x = a+1;
		int y = a+2;
		printf("%d %d %d PUM\n", a, x, y);
		a = a+3;
	}
	return 0;
}
