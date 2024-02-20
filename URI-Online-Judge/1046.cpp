#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if(x == y){
		printf("O JOGO DUROU 24 HORA(S)");
	}
	else if(x < y){
		printf("O JOGO DUROU %d HORA(S)", y-x);
	}
	else{
		int a = 24-x;
		printf("O JOGO DUROU %d HORA(S)", a+y);
	}
	return 0;
}
