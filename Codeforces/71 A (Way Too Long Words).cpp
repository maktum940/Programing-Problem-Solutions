#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        char s[100];
        scanf("%s", s);
        int len = strlen(s);
        if(len < 11){
            printf("%s\n", s);
        }
        else{
            len = len - 2;
            printf("%c%d%c\n", s[0], len, s[len+1]);
        }
    }
    return 0;
}
