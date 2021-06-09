#include <stdio.h>

int main()
{
	int ara[101];
	int a = 0, b;
	
	for(int i = 1; i < 101; i++){
		scanf("%d", &ara[i]);
	}
	for(int i = 1; i < 101; i++){
		if(ara[i] > a){
			a = ara[i];
			b = i;
		}
	}
	printf("%d\n%d\n", a, b);
	return 0;
}
