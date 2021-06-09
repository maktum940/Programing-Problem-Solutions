#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++){
		int a;
		scanf("%d", &a);
		
		if(a > 0 && a%2 == 0){
			printf("EVEN POSITIVE\n");
		}
		else if(a > 0 && a%2 != 0){
			printf("ODD POSITIVE\n");
		}
		else if(a < 0 && a%2 == 0){
			printf("EVEN NEGATIVE\n");
		}
		else if(a < 0 && a%2 != 0){
			printf("ODD NEGATIVE\n");
		}
		else if(a == 0){
			printf("NULL\n");
		}
	}
	return 0;
}
