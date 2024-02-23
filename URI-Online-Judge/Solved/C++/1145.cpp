#include <stdio.h>

int main()
{
	int t, n;
	scanf("%d%d", &t, &n);
	
	int p = n/t;
	int a = 1;
	for(int i = 0; i < p; i++, a++){
		for(int j = 1; j < t; j++, a++){
			printf("%d ", a);
		}
		printf("%d\n", a);
	}
	return 0;
}

