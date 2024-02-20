#include <stdio.h>
int main()
{
	int t, i;
	scanf("%d", &t);
	for(i = 1; i <= t; i++){
		if(t%i == 0){
			printf("%d\n", i);
		}
	}
	return 0;
}
