    #include<stdio.h>
    int main()
    {
        int a;
        scanf("%d", &a);
        if(a%7 == 0 || a %4 == 0 || a%47 == 0 || a%74 == 0 || a % 447 == 0 || a % 477 == 0 || a % 747 == 0 || a % 474 == 0){
            printf("YES");
        }
        else{
            printf("NO");
        }
        return 0;
    }
