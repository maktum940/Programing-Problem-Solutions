#include <stdio.h>
int main()
{
	char c;
	while(scanf("%c", &c) != EOF){
		if(c >= 'a' && c <= 'z'){
			if(c + 13 > 'z'){
				c = c - 13;
			}else{
				c = c + 13;
			}
			printf("%c", c);
		}else if(c >= 'A' && c <= 'Z'){
			if(c + 13 > 'Z'){
				c = c - 13;
			}else{
				c = c + 13;
			}
			printf("%c", c);
		}else {
			printf("%c", c);
		}
	}
	return 0;
}
