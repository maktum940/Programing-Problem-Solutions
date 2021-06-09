#include <stdio.h>

int main()
{
	int a;
	int even = 0;
	int odd = 0;
	int posi = 0;
	int nega = 0;
	for(int i = 0; i < 5; i++){
		scanf("%d", &a);
		if (a%2 == 0){
			even++;
		}
		if(a%2 != 0){
			odd++;
		}
		if(a < 0){
			nega++;
		}
		if(a > 0){
			posi++;
		}
	}
	printf("%d valor(es) par(es)\n", even);
	printf("%d valor(es) impar(es)\n", odd);
	printf("%d valor(es) positivo(s)\n", posi);
	printf("%d valor(es) negativo(s)\n", nega);
	
	return 0;
}
