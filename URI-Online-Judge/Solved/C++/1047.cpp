#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	int x = (a*60)+b;
	int y = (c*60)+d;
	
	if(x == y){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	else if(x < y){
		int i = y-x;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", i/60, i%60);
	}
	else{
		int a = 1440 - x;
		int b = a + y;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", b/60, b%60);
	}
	return 0;
}
