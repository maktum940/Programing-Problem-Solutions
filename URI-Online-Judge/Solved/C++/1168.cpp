#include <stdio.h>
#include <string.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		char input[1000];
		scanf("%s", input);
		int j, total_leds = 0;
		for(j = 0; j < strlen(input); j++){
			if(input[j] == '1'){
				total_leds += 2;
			}
			else if(input[j] == '2'){
				total_leds += 5;
			}
			else if(input[j] == '3'){
				total_leds += 5;
			}
			else if(input[j] == '4'){
				total_leds += 4;
			}
			else if(input[j] == '5'){
				total_leds += 5;
			}
			else if(input[j] == '6'){
				total_leds += 6;
			}
			else if(input[j] == '7'){
				total_leds += 3;
			}
			else if(input[j] == '8'){
				total_leds += 7;
			}
			else if(input[j] == '9'){
				total_leds += 6;
			}
			else if(input[j] == '0'){
				total_leds += 6;
			}
		}
		printf("%d leds\n", total_leds);
	}
	return 0;
}
