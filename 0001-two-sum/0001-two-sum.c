/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *returnarray=malloc(sizeof(int)*2);
    *returnSize=2;
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                returnarray[0]=i;
                returnarray[1]=j;
                return returnarray;
            }
        }
    }
    return returnarray;
}