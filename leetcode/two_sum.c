/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


void bubbleSortWithIndex(int arr[], int n, int indices[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j+1]);
                swap(&indices[j], &indices[j+1]);
            }
        }
    }
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int indices[numsSize];
    for(int i=0; i<numsSize; i++){
        indices[i]=i;
    }
    bubbleSortWithIndex(nums, numsSize, indices);
    
    int a=0, b=numsSize-1;
    
    while(a<b){
        if(nums[a]+nums[b]==target){
            int* result = (int*)malloc(2 * sizeof(int));
            result[0] = indices[a];
            result[1] = indices[b];
            *returnSize = 2;
            return result;
        }
        else if(nums[a]+nums[b]>target){
            b-=1;
        }
        else{
            a+=1;
        }
    }
    return 0;
    
}
