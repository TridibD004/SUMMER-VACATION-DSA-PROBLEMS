/*
PROBLEM :- Missing number in array 

QUESTION :- Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

INPUT & OUTPUT :- 

Example 1:
  Input:
  N = 5
  A[] = {1,2,3,5}
  Output: 4
Example 2:
  Input:
  N = 10
  A[] = {6,1,2,8,3,4,7,10,5}
  Output: 9*/

//CODE:-

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& a, int n) {
        // Your code goes here
        
        int sum = n*(n+1)/2;
       for(int x: a)
           sum-=x;
       return sum;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends
