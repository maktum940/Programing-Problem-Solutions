#include <stdio.h>

int main()
{
	int t;
	while(scanf("%d", &t) == 1){
		if (t == 0){
			break;
		}
		t = t-1;
		for(int i = 1; i <= t; i++){
			printf("%d ", i);
		}
		printf("%d\n", t+1);
		
	}
	return 0;
}
