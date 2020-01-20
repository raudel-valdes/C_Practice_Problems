/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//This program uses brute force and is not very efficient. O(n^2)

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
  
  int sum = 0;
  int indexOne = 0;
  int indexTwo = 0;
  int *twoSumArr = (int *) malloc(2 * sizeof(int));

  while(sum != target && indexOne != numsSize - 1) {
    
    while(sum != target && indexTwo != numsSize - 1) {

      if(indexTwo < numsSize - 1)
        sum = nums[indexOne] + nums[indexTwo];
  
      if(sum != target)
        indexTwo++; 
        
    }
     
    if(sum != target) {
      indexOne++;
      indexTwo = indexOne + 1;
    }
    
  }
  
  twoSumArr[0] = indexOne;
  twoSumArr[1] = indexTwo;
  *returnSize = 2;
  
  return twoSumArr;

}