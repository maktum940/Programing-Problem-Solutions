#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, min, mid, max;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	min = fmin(a, b);
	min = fmin(min, c);
	
	max = fmax(a, b);
	max = fmax(max, c);

	if(b == min && c == max || c == min && b == max){
		mid = a;
	}
	else if(a == min && c == max || c == min && a == max){
		mid = b;
	}
	else if(a == min && b == max || b == min && a == max){
		mid = c;
	}
	a = max;
	b = mid;
	c = min;
	
	
	if(a >= b+c){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{
		
		if((a*a) == (b*b)+(c*c)){
			printf("TRIANGULO RETANGULO\n");
		}
		if((a*a) > (b*b)+(c*c)){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if((a*a) < (b*b)+(c*c)){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(a == b && b == c){
			printf("TRIANGULO EQUILATERO\n");
		}
		else if(a == b || b == c || c == a){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	return 0;
}
