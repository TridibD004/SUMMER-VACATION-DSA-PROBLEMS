// Largest subarray of 0's and 1's
// EasyAccuracy: 38.92%Submissions: 67646Points: 2
// Given an array of 0s and 1s. Find the length of the largest subarray with equal number of 0s and 1s.

// Example 1:

// Input:
// N = 4
// A[] = {0,1,0,1}
// Output: 4
// Explanation: The array from index [0...3]
// contains equal number of 0's and 1's.
// Thus maximum length of subarray having
// equal number of 0's and 1's is 4.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
       int maxLen(int arr[], int N)
   {
      for(int i=0;i<N;i++)
      {
          if(arr[i]==0)
          {
              arr[i]=-1;
          }
      }
      map<int,int> m;
      
      int max1=0,sum=0;
      
      for(int i=0;i<N;i++)
      {
          sum=sum+arr[i];
          if(sum==0)
          {
              max1=max(max1,i+1);
          }
          if(m.find(sum)!=m.end())
          {
              max1=max(max1,abs(m[sum]-i));
          }
          else
          {
              m[sum]=i;
          }
      }
      return max1;
      
   }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
