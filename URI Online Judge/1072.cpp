#include <stdio.h>

int main()
{
	int in = 0;
	int out = 0;
	
	int t, a;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		scanf("%d", &a);
		if(a >= 10 && a <= 20){
			in++;
		}
		else{
			out++;
		}
	}
	printf("%d in\n", in);
	printf("%d out\n", out);
	
	return 0;
}
