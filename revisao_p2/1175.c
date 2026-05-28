#include <stdio.h>

int main(){

    int nums[20];

    for(int i = 0; i < 20; i++){
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < 10; i++){
        int temp = nums[i];
        nums[i] = nums[19 - i];
        nums[19 - i] = temp;
    }

    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, nums[i]);
    }

    return 0;
}