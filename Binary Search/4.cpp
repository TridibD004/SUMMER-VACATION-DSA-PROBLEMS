/*
PROBLEM :- Kth Smallest Element in a Sorted Matrix

QUESTION:- Given an n x n matrix where each of the rows and columns is sorted in ascending order, return the kth smallest element in the matrix.
            Note that it is the kth smallest element in the sorted order, not the kth distinct element.
            You must find a solution with a memory complexity better than O(n2).
            
INPUT AND OUTPUT :- 

Example 1:
  Input: matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
  Output: 13
  Explanation: The elements in the matrix are [1,5,9,10,11,12,13,13,15], and the 8th smallest number is 13

Example 2:
  Input: matrix = [[-5]], k = 1
  Output: -5*/

//CODE:- [as the problem is from LEETCODE only the main part is done]

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int i,j;
        vector<int>a;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                    a.push_back(matrix[i][j]);
            }
        }
        sort(a.begin(),a.end());
        if(k>(a.size()))
        return -1;
        else
        return a[k-1];
    }
};
