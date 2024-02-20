#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		
    	int i, j, x, len_a, len_b, y;
    	char a[51], b[51], c[101];
    	scanf("%s %s", a, b);
    
    	len_a = strlen(a);
    	len_b = strlen(b);
    	y = len_a + len_b;
    
	
    	a[len_a] = '\0';
    	b[len_b] = '\0';
    	c[y] = '\0';
    
    	for(i = 0, x = 0; a[x] != '\0'; i = i+2, x++){
        	c[i] = a[x];
    	}
    	
		for(i = 1, x = 0; b[x] != '\0'; i = i+2, x++){
        	c[i] = b[x];
    	}
    	
		if(len_b > len_a){
    		j = len_b - len_a;
    		j = len_b - j;
    		j = j + len_a;
    		for(i = len_a; i < len_b; i++){
    			c[j] = b[len_a];
    			j++;
    			len_a = len_a + 1;
			}
		}
		else{
			j = len_a - len_b;
			j = len_a - j;
			j = j + len_b;
    		for(i = len_b; i < len_a; i++)c{
    			c[j] = b[len_b];
    			j++;
    			len_b = len_b + 1;
			}
			c[j] = '\0';
		}
		
    	printf("%s", c);
    	printf("\n");
	}
    return 0;
}
