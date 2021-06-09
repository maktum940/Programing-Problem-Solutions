#include <stdio.h>

int main()
{
	int t, a, b, c;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		scanf("%d%d", &a, &b);
		c = (a*b)*2;
		
		for (int j = 1; j <= 20000; j++){
			if(a == b){
				printf("%d\n", a*b*4);
				break;
			}
			
			if(c <= j*j && (j > a+a || j > b+b)){
				printf("%d\n", j*j);
				break;
			}	
		}
	}
	return 0;
}
