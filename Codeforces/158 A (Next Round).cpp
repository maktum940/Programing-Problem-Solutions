#include <stdio.h>

int main()
{
    int t, j, k, i, sum = 0, count = 0;
    scanf("%d%d", &t, &k);
    int nums[t];
    for(i = 0; i < t; i++){
        scanf("%d", &nums[i]);
    }
    for(j = 0; j < t; j++){
        if(nums[k-1] == 0){
            if(nums[j] > 0) count++;
        }
        else if(nums[k-1] <= nums[j]) count++;
    }
    printf("%d\n", count);

    return 0;
}
