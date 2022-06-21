/*
PROBLEM:- Search Insert Position

QUESTION :- Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

INPUT AND OUTPUT :- 

Example 1:
  Input: nums = [1,3,5,6], target = 5
  Output: 2
Example 2:
  Input: nums = [1,3,5,6], target = 2
  Output: 1*/

//CODE:-  [as the problem is from LEETCODE only the main part is done]

int searchInsert(int* nums, int numsSize, int target){
    int i;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>=target)
            break;
    }
    return i;
}
