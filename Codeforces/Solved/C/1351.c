    #include<stdio.h>
    int main()
    {
        int t, a1, b1, a2, b2, s, p;
        scanf("%d", &t);
        while(t--){
            scanf("%d%d", &a1, &b1);
            scanf("%d%d", &a2, &b2);
            int max = 0;
            if(a1 > max){
                max = a1;
                if(b1 > max){
                    max = b1;
                    if(a2 > max){
                        max = a2;
                        if(b2 > max){
                            max = b2;
                        }
                    }
                }
            }
            s = max*max;
            p = max*4;
            if(p == (a1+b1+a2+b2)*2 || s == (a1*b1)+(a2*b2)){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }

        return 0;
    }
