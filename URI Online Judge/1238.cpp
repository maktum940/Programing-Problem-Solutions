#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		
    	int i, x, len_a, len_b;
    	char s1[51], s2[51];
    	scanf("%s", s1);
    	scanf("%s", s2);
    
    	int l1 = strlen(s1);
    	int l2 = strlen(s2);
    	int l = l1 + l2;
    
    	char s[l];
    	
    	int j = 0, k = 0, index = 0;
	
    	while(j < l1 && k < l2){
    		s[index++] = s1[j++];
    		s[index++] = s2[k++];
		}
		while(j < l1){
			s[index++] = s1[j++];
		}
		while (k < l2){
			s[index++] = s2[k++];
		}
		int m;
		for(m = 0; m < index ; m++){
			printf("%c", s[m]);
		}
    	printf("\n");
	}
    return 0;
}
