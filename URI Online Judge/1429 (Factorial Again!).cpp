#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    while(scanf("%s", a) == 1){
        int len, sum = 0;
        len = strlen(a);
        if(a[0] == '0'){
            break;
        }
        else{
            sum = a[0]*len;
            printf("%d\n", sum);
        }
    }
	return 0;
}
