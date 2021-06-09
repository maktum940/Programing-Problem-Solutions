#include<stdio.h>
int main()
{
	int i;
	char a[13];
	a[1] = 'M';
	a[3] = 'a';
	a[5] = 'k';
	a[7] = 't';
	a[9] = 'u';
	a[11] = 'm';
	for(i = 0; i < 13; i++){
		printf("%c", a[i]);
	}
	return 0;
	//puts(a);
}
