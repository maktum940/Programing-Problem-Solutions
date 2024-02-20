#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int count = 0;
	for(int t = 0; ; n++, t++){
		if (n%2 != 0){
			printf("%d\n", n);
			count++;
		}
		if(count == 6){
			break;
		}
	}
	return 0;
}
