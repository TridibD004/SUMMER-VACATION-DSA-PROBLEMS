/* 
PROBLEM :- Subarray with given sum

QUESTION :- Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

In case of multiple subarrays, return the subarray which comes first on moving from left to right.

INPUT AND OUTPUTS :- 

Example 1:
  Input:
  N = 5, S = 12
  A[] = {1,2,3,7,5}
  Output: 2 4
  Explanation: The sum of elements 
  from 2nd position to 4th position 
  is 12.

Example 2:
  Input:
  N = 10, S = 15
  A[] = {1,2,3,4,5,6,7,8,9,10}
  Output: 1 5
  Explanation: The sum of elements 
  from 1st position to 5th position
  is 15.*/

//CODE :

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
   long long  l=0,sum=0;
   vector<int>ans;
   for(int r=0;r<n;r++){
       sum+=arr[r];
       while(sum>s){
           sum-=arr[l];
           l++;
       }
       if(sum==s){
          ans.push_back(l+1);
          ans.push_back(r+1);
          break;
       }
   }
   if(ans.size()==0){
       ans.push_back(-1);
       return ans;
   }
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
