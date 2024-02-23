#include <stdio.h>
#include <string.h>

int main()
{
	char x[20], y[20], z[20];
	scanf("%s%s%s", x, y, z);
	
	int len_x = strlen(x);
	int len_y = strlen(y);
	int len_z = strlen(z);
	
	char a1[] = "vertebrado"; 
	char a2[] = "invertebrado";
	
	char b1[] = "ave";
	char b2[] = "mamifero";
	char b3[] = "inseto";
	char b4[] = "anelideo";
	
	char c1[] = "carnivoro";
	char c2[] = "onivoro";
	char c4[] = "hematofago";
	
	if(x[0] == a1[0] && len_x == 10){
		if(y[0] == b1[0] && len_y == 3){
			if(z[0] == c1[0] && len_z == 9){
				printf("aguia\n");
			}
			else{
				printf("pomba\n");
			}
		}
	}
	if(x[0] == a1[0] && len_x == 10){
		if(y[0] == b2[0] && len_y == 8){
			if(z[0] == c2[0] && len_z == 7){
				printf("homem\n");
			}
			else{
				printf("vaca\n");
			}
		}
	}
	if(x[0] == a2[0] && len_x == 12){
		if(y[0] == b3[0] && len_y == 6){
			if(z[0] == c4[0] && len_z == 10){
				printf("pulga\n");
			}
			else{
				printf("lagarta\n");
			}
		}
	}
	if(x[0] == a2[0] && len_x == 12){
		if(y[0] == b4[0] && len_y == 8){
			if(z[0] == c4[0] && len_z == 10){
				printf("sanguessuga\n");
			}
			else{
				printf("minhoca\n");
			}
		}
	}
	
	return 0;
}
